/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:43:01 by livsauze          #+#    #+#             */
/*   Updated: 2025/07/01 14:41:25 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main() {

	try
	{
		std::cout << "Testing INT Array : " << std::endl;
		Array<int> intArrayEmpty;
		Array<int> intArray((5));
		
		for (size_t i = 0; i < intArray.size(); i++)
		{
			intArray[i] = 42;
		}
		std::cout << "Array1 (empty)'s size is " << intArrayEmpty.size() << std::endl;
		std::cout << "Array2's size is " << intArray.size() << std::endl;
		std::cout << "What's inside ?" << std::endl;
		for (size_t i = 0; i < intArray.size(); i++)
		{
			std::cout << intArray[i] << " - ";
		}

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "Testing string Array : " << std::endl;
		Array<std::string> stringArray(3);
		stringArray[0] = "Hello ";
		stringArray[1] = "World ";
		stringArray[2] = "!\n";

		std::cout << "String Array's size is " << stringArray.size() << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++) {
			std::cout << stringArray[i] << " ";
		}
		
		std::cout << stringArray[3] << std::endl;

	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}