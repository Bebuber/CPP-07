/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:00:26 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/22 15:48:10 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

void multiply(int &n) {
	n *= 5;
}

void uppercase(char &c) {
	if (c >= 'a' && c <= 'z')
		c -= 32;
}

int main() {
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char str[16] = {"Hello World 42!"};

	iter<int>(num, 10, multiply);
	iter<char>(str, 16, uppercase);
	
	
	for (int i = 0; i < 10; ++i) {
		std::cout << num[i] << ", ";
	}
	std::cout << std::endl;
	
	std::cout << str << std::endl;

	return 0;
}