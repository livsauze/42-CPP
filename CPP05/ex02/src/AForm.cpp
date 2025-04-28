/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:11:44 by livsauze          #+#    #+#             */
/*   Updated: 2025/04/28 16:03:14 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Name"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
	std::cout << "Default constructor has been called" << std::endl;
}

AForm::AForm(const std::string name, const int gToSign, const int gToExecute)
	: _name(name), _signed(false), _gradeToSign(gToSign), _gradeToExecute(gToExecute)
{
	if (gToSign < 1 || gToExecute < 1)
		throw GradeTooHighException();
	else if ( gToSign > 150 || gToExecute > 150)
		throw GradeTooHighException();
}
AForm::AForm(const AForm& other) : _name(other._name), _signed(other._signed),
	_gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		this->_signed = other._signed;
	return *this;
}

AForm::~AForm()
{
	std::cout << "Destructor has been called" << std::endl;
}

std::string	AForm::getName() const
{
	return _name;
}

bool	AForm::getSigned() const
{
	return _signed;
}

int	AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int	AForm::getGradeToEexecute() const
{
	return _gradeToExecute;
}

void	AForm::beSigned(Bureaucrat& b)
{
	int	bGrade = b.getGrade();
	if (_signed == true)
		throw FormAlreadySigned();
	if (bGrade <= _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& output, const AForm& input)
{
	if (input.getSigned())
		output << "AForm " << input.getName() << " is signed." << "\n";
	else
		output << "AForm " << input.getName() << " is not signed." << "\n";
	output << "Grade " << input.getGradeToEexecute() << " is needed to execute Aform and grade " 
		<< input.getGradeToSign() << " is needed to sign form." << '\n';
	return output;
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return ("The Grade is too High");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return ("The Grade is too Low");
}

const char* AForm::FormAlreadySigned::what(void) const throw()
{
	return ("AForm already signed");
}