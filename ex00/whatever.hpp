/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:45:33 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/22 12:27:45 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


template <typename T>
void swap(T& x, T& y) 
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename T>
T min(T x, T y) 
{
	return (x < y)? x: y;
}

template <typename T>
T max(T x, T y)
{
	return (x > y)? x: y;
}

#endif