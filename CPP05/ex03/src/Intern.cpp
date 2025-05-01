/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:00:32 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 19:43:54 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Creating an Intern with no name" << std::endl;
}
Intern::Intern(const Intern& other)
{
	*this = other;
}
Intern& Intern::operator=(const Intern& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Deleting the intern, he's so random" << std::endl;
}
AForm* Intern::ShrubberyCreation(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::RobotomyRequestCreation(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::PresidentialPardonCreation(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string formNames[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm* (Intern::*formPtr[3])(const std::string &) = {
		&Intern::ShrubberyCreation, &Intern::RobotomyRequestCreation, &Intern::PresidentialPardonCreation};

	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*formPtr[i])(formTarget));
		}
	}
	std::cerr << "Form not found: " << formName << std::endl;
    return NULL;
}
