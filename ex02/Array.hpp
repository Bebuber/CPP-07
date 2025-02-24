/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:08:10 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/24 14:22:59 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		
		T& operator[](size_t index);
		size_t getSize() const;
	
	private:
		T* arr;
		size_t size;
};

template<typename T>
Array<T>::Array() : arr(nullptr), size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]()), size(n) {}

template<typename T>
Array<T>::Array(const Array<T>& other) : arr(new T[other.size]()), size(other.size) {
	for (size_t i = 0; i < size; ++i) {
		arr[i] = other.arr[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		delete[] arr;
		size = other.size;
		arr = new T[size];
		for (size_t i = 0; i < size; ++i) {
			arr[i] = other.arr[i];
		}
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	if (arr != nullptr)
		delete[] arr;
}

template<typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= size) {
		throw std::out_of_range("Index out of range");
	}
	return arr[index];
}

template<typename T>
size_t Array<T>::getSize() const {
	return size;
}

#endif