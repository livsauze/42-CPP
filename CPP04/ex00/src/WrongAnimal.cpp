/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:39:32 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/09 15:43:54 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
	std::cout << "WrongAnimal of type " << type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
	std::cout << "WrongAnimal of type " << other._type <<  " is copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		_type = other.getType();
	}
	std::cout << "Assignment operator called" << std::endl;	
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal of type " << _type << " has been destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Some ****Noise****" << std::endl;
}