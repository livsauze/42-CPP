/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:31:14 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 18:52:22 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main()
{
	try {
		Bureaucrat boss("Alice", 1); // grade max
		Bureaucrat employee("John", 25);
		Bureaucrat employee2("Bob", 70);
		Bureaucrat intern("Charlie", 150); // grade min

		std::cout << "\n---- FORM CREATION ----" << std::endl;
		ShrubberyCreationForm shrub("Garden");
		RobotomyRequestForm robot("Marvin");
		PresidentialPardonForm pardon("Ford");

		std::cout << "\n---- SIGNING FORMS ----" << std::endl;
		boss.signForm(shrub);
		employee.signForm(shrub);
		employee2.signForm(robot);
		boss.signForm(pardon);

		std::cout << "\n---- EXECUTING FORMS ----" << std::endl;
		intern.executeForm(shrub);     // should fail (grade too low)
		employee.executeForm(shrub);   //should succeed and create a file
		employee2.executeForm(robot);   // should succeed sometimes
		boss.executeForm(pardon);      // should succeed

		std::cout << "\n---- EXECUTING UNSIGNED FORM ----" << std::endl;
		PresidentialPardonForm notSigned("Unworthy");
		boss.executeForm(notSigned);   // should fail (not signed)
		std::cout << "\n ---- DELETING ----" << std::endl;

	} catch (const std::exception& e) {
		std::cerr << "Error caught in main: " << e.what() << std::endl;
	}
	return 0;
}
