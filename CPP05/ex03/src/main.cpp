/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:31:14 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 19:58:54 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int	main()
{
	try {
		std::cout << "---- CREATING BUREAUCRATS AND INTERNS ----" << std::endl;
		Intern intern;
		Bureaucrat boss("Alice", 1);
		Bureaucrat employee("Bob", 80);
		std::cout << boss << std::endl;
		std::cout << employee << std::endl;
		std::cout << "\n---- CREATING FORMS ----" << std::endl;
		AForm* form = intern.makeForm("ShrubberyCreationForm", "target");
		AForm* form2 = intern.makeForm("PresidentialPardonForm", "target2");
		std::cout << "\n---- SIGNING AND EXECUTING FORMS ----" << std::endl;
		boss.signForm(*form);
		boss.executeForm(*form);
		employee.signForm(*form2);
		employee.incrementGrades(75);
		std::cout << employee << std::endl;
		employee.signForm(*form2);
		std::cout << "\n----DELETING EVERYTHING ----" << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Error caught in main: " << e.what() << std::endl;
	}
	return 0;
}
