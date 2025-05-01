/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:10:54 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/01 18:39:05 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP
#define _AFORM_HPP

#include <fstream>
#include <ostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
	public:
		AForm();
		AForm(const std::string name, const int gToSign, const int gToExecute );
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		~AForm();

		std::string getName() const;
		bool getSigned() const;
		int	getGradeToSign() const;
		int	getGradeToEexecute() const;
		
		virtual void beSigned(Bureaucrat& b);
		void	checkExecRequirements(const Bureaucrat& executor) const;
		virtual void execute(const Bureaucrat& executor) const = 0;
		
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
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class FormAlreadySigned : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
};

std::ostream& operator<<(std::ostream& output, const AForm& input);

#endif