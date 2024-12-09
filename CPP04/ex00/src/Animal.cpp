/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:37:20 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/09 15:40:41 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const std::string& type) : _type(type)
{
	std::cout << "Animal of type " << type << " has been created" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << "Animal of type " << other._type <<  " is copied" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		_type = other.getType();
	}
	std::cout << "Assignment operator called" << std::endl;	
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal of type " << _type << " has been destroyed" << std::endl;
}

std::string Animal::getType() const
{
	return(_type);
}

void	Animal::makeSound() const
{
	std::cout << "Some ****Noise****" << std::endl;
}