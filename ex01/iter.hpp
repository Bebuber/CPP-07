/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:42:57 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/22 16:04:21 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef>

void multiply(int &n);
void uppercase(char &c);

template <typename T> 
void iter(T* ptr, std::size_t len, void(*f)(T&))
{
	for (std::size_t i = 0; i < len; ++i)
	{
		f(ptr[i]);
	}
}

#endif