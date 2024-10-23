/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:27:09 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/23 14:28:17 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int iValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = iValue << bits;	
}
Fixed::Fixed(const float fValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(fValue * (1 << bits));
}
Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
	
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Surcharge operators
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { 
        this->value = other.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

// Member functions
void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

int	Fixed::toInt(void) const
{
	return (value >> bits);
}

float Fixed::toFloat(void) const
{
	return ((this->value) / (1 << bits));
}
