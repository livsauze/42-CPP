/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:34:50 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 18:38:45 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>
#include <ostream>
#include <iomanip>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		int	getGrade() const;
		std::string getName() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm& form);
		void	executeForm(AForm const & form);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
	
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& input);
#endif