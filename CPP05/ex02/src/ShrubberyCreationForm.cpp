/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:12:30 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 18:37:44 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other.getTarget())
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other.getTarget();
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	checkExecRequirements(executor);
	std::ofstream file((_target + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "       🌲        \n";
		file << "      /\\*\\      \n";
		file << "     /\\O\\*\\     \n";
		file << "    /*/\\/\\/\\    \n";
		file << "   /\\O\\/\\*\\/\\   \n";
		file << "  /\\*\\/\\*\\/\\/\\  \n";
		file << " /\\O\\/\\/*/\\/O/\\ \n";
		file << "       ||        \n";
		file << "       ||        \n";
		file << "     ------      \n";
	}
	else
		throw std::ios_base::failure("Failed to open file");

}
