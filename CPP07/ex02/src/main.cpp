/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:43:01 by livsauze          #+#    #+#             */
/*   Updated: 2025/06/05 17:13:05 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
void	print(const T& something)
{
	std::cout << something << " ";
}
template <typename T>
void	increment(T& something)
{
	something += 1;
}

int main( void )
{
	int arrayI[] = {1, 2, 3, 4, 42};
	std::cout << "int array : ";
	iter(arrayI, 5, print<int>);
	std::cout << std::endl;
	std::cout << "incrementing the array : ";
	iter(arrayI, 5, increment<int>);
	iter(arrayI, 5, print<int>);
	std::cout << std::endl;
	std::cout << std::endl;

	double arrayD[] = {1.1, 2.1, 3.1, 4.1, 42.1};
	std::cout << "double array : ";
	iter(arrayD, 5, print<double>);
	std::cout << std::endl;
	std::cout << "incrementing the array : ";
	iter(arrayD, 5, increment<double>);
	iter(arrayD, 5, print<double>);
	std::cout << std::endl;
	std::cout << std::endl;

	char arrayC[] = "hello";
	std::cout << "char array : ";
	iter(arrayC, 5, print<char>);
	std::cout << std::endl;
	std::cout << std::endl;

	const std::string strArray[] = {"Hello World", "Hola"};
	std::cout << "const string array : ";
	iter(strArray, 2, print<std::string>);
	std::cout << std::endl;
	return 0;
}