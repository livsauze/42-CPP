/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:27:09 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/27 16:37:19 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int iValue)
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = iValue << bits;	
}
Fixed::Fixed(const float fValue)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value = roundf(fValue * (1 << bits));
}
Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
	
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// Surcharge operators
Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
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

bool Fixed::operator>(const Fixed& other) const
{
	return (this->value > other.value);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->value < other.value);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->value >= other.value);	
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->value <= other.value);	
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->value == other.value);	
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->value != other.value);	
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits(this->value + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits(this->value - other.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits((this->value * other.getRawBits()) >> bits);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits((this->value << bits) / other.getRawBits());
	return result;
}

Fixed& Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	this->value++;
	return tmp;
	
}

Fixed& Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	
	this->value--;
	return tmp;
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

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}
const Fixed& Fixed::min(Fixed const& a, Fixed const& b)
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}
const Fixed& Fixed::max(Fixed const& a, Fixed const& b)
{
	return (a > b) ? a : b;
}
