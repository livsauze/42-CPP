/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:14:02 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/18 18:56:42 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "Memory adress of the string variable : " << &str << std::endl;
	std::cout << "Memory adress held by ptr : " << ptr << std::endl;
	std::cout << "Memory adress held by ref : " << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the variable : " << str << std::endl;
	std::cout << "Value pointed by ptr : " << *ptr << std::endl;
	std::cout << "Value pointed by ref : " << ref << std::endl;
}