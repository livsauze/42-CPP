/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:27:09 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/02 15:55:49 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : value(0)
{
}
Fixed::Fixed(const int iValue)
{
	this->value = iValue << bits;	
}
Fixed::Fixed(const float fValue)
{
	this->value = roundf(fValue * (1 << bits));
}
Fixed::Fixed(const Fixed& other)
{
	*this = other;
}
	
Fixed::~Fixed()
{
}

// Surcharge operators
Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other) { 
        this->value = other.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->value > other.value);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->value == other.value);	
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits(this->value + other.getRawBits());
	return result;
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
	return (static_cast<float>(this->value) / (1 << bits));
}
