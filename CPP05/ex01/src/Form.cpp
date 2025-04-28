/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:11:44 by livsauze          #+#    #+#             */
/*   Updated: 2025/04/28 15:00:03 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Name"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
	std::cout << "Default constructor has been called" << std::endl;
}

Form::Form(const std::string name, const int gToSign, const int gToExecute)
	: _name(name), _signed(false), _gradeToSign(gToSign), _gradeToExecute(gToExecute)
{
	if (gToSign < 1 || gToExecute < 1)
		throw GradeTooHighException();
	else if ( gToSign > 150 || gToExecute > 150)
		throw GradeTooHighException();
}
Form::Form(const Form& other) : _name(other._name), _signed(other._signed),
	_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		this->_signed = other._signed;
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor has been called" << std::endl;
}

std::string	Form::getName() const
{
	return _name;
}

bool	Form::getSigned() const
{
	return _signed;
}

int	Form::getGradeToSign() const
{
	return _gradeToSign;
}

int	Form::getGradeToEexecute() const
{
	return _gradeToExecute;
}

void	Form::beSigned(Bureaucrat& b)
{
	int	bGrade = b.getGrade();
	if (_signed == true)
		throw FormAlreadySigned();
	if (bGrade <= _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const Form& input)
{
	if (input.getSigned())
		output << "Form " << input.getName() << " is signed." << "\n";
	else
		output << "Form " << input.getName() << " is not signed." << "\n";
	output << "Grade " << input.getGradeToEexecute() << " is needed to execute form and grade " 
		<< input.getGradeToSign() << " is needed to sign form." << '\n';
	return output;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("The Grade is too High");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("The Grade is too Low");
}

const char* Form::FormAlreadySigned::what(void) const throw()
{
	return ("Form already signed");
}