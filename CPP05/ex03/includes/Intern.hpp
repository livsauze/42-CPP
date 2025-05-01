/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:57:27 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 19:16:01 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();
		
		AForm*  ShrubberyCreation(const std::string& target);
		AForm*  RobotomyRequestCreation(const std::string& target);
		AForm*  PresidentialPardonCreation(const std::string& target);
		AForm* makeForm(std::string formName, std::string formTarget);
};

#endif