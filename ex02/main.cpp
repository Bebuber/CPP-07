/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:33:29 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/24 14:34:56 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

	Array<int> defaultArray;
	try {
		std::cout << defaultArray.getSize() << std::endl;
		std::cout << defaultArray[3] << std::endl;
	} catch (const std::out_of_range& e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	Array<int> sizedArray(10);
	
	std::cout << "sizedArray size: " << sizedArray.getSize() << std::endl;
	std::cout << "sizedArray[5]: " << sizedArray[5] << std::endl;
	sizedArray[5] = 42;
	std::cout << "sizedArray[5]: " <<  sizedArray[5] << std::endl;

	Array<int> another;
	std::cout << "---------before copying---------------" << std::endl;
	std::cout<< "another size: " << another.getSize() << std::endl;
	another = sizedArray;
	std::cout << "---------after copying---------------" << std::endl;
	std::cout << "another size: " << another.getSize() << std::endl;
	std::cout << "another[5]: " << another[5] << std::endl;
	
	return 0;
}