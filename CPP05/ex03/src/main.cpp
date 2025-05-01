/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:31:14 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 19:41:53 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int	main()
{
	try {
		Intern intern;
		Bureaucrat boss("Alice", 1);
		AForm* form = intern.makeForm("ShrubberyCreationForm", "target");
		boss.signForm(*form);
		boss.executeForm(*form);
		
	} catch (const std::exception& e) {
		std::cerr << "Error caught in main: " << e.what() << std::endl;
	}
	return 0;
}
