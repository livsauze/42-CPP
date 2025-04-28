/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:31:14 by livsauze          #+#    #+#             */
/*   Updated: 2025/04/28 15:00:33 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Bureaucrat	Clement("Clement", 30);
		std::cout << Clement << std::endl;
		Form		Contract("Contract 1", 50, 130);
		std::cout << Contract << std::endl;

		Clement.incrementGrade();
		std::cout << Clement << std::endl;
		Clement.signForm(Contract);
		std::cout << Contract << std::endl;
		Clement.signForm(Contract);
	}
	catch (const std::exception& e) { 
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "------------- GRADE TOO LOW -------------" << std::endl;
	try {
		Bureaucrat	Peter("Peter", 120);
		std::cout << Peter << std::endl;
		Form		Contract("Contract 2", 100, 140);
		std::cout << Contract << std::endl;

		Peter.incrementGrade();
		std::cout << Peter << std::endl;
		Peter.signForm(Contract);
		std::cout << Contract << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
