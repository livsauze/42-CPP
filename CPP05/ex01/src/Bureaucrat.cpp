/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:36:39 by livsauze          #+#    #+#             */
/*   Updated: 2025/04/06 15:05:39 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Name"), _grade(1)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 0 && grade <= 150)
		_grade = grade;
	else if (grade < 1)
		throw GradeTooHighException();
	else
		throw GradeTooHighException();
	std::cout << "Constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
		// this->_name = other._name;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& input)
{
	output << input.getName() << ", bureaucrat grade " << input.getGrade() << "\n";
	return output;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor has been called" << std::endl;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	try {
		form.beSigned(*this);
		std::cout << "Bureaucrat " << getName() << " signed form " << form.getName() << std::endl;
	}
		catch (const std::exception& e) {
		std::cout << "Bureaucrat " << getName() << " couldn't sign form " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("The Grade is too High");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("The Grade is too Low");
}
