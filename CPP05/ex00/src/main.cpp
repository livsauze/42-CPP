/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:31:14 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/18 21:43:05 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    try {
        Bureaucrat bob("Bob", 1);
        bob.incrementGrade();
    } 
    catch (const std::exception& e) { 
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    try {
        Bureaucrat alice("Alice", 150);
        alice.decrementGrade();
    }
    catch (const std::exception& e) { 
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
	try
	{
		Bureaucrat jeff;
		std::cout << jeff.getGrade() << std::endl;
		jeff.decrementGrade();
		std::cout << jeff.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	try
	{
		Bureaucrat betty("Betty", 6);
		std::cout << betty.getGrade() << std::endl;
		betty.incrementGrade();
		std::cout << betty.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
    return 0;
}

