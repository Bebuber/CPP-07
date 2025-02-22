/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:27:52 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/22 12:35:01 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main() {
	int a = 5;
	int b = 115;

	swap<int>(a, b);
	std::cout << "a: " << a << "    b: " << b << std::endl;

	swap<int>(a, b);
	std::cout << "a: " << a << "    b: " << b << std::endl;

	std::cout << min<int>(a, b) << std::endl;
	
	std::cout << max<int>(a, b) << std::endl;

	return 0;	
}