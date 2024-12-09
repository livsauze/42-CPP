/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:35:25 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/09 15:41:40 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Animal of type  " << other._type <<  " is copied" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	std::cout << "Assignment operator called" << std::endl;	
	return *this;
}

Cat::~Cat()
{
	std::cout << "The Cat has been destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAAOUUUUUUUUUUUUuuuuu" << std::endl;
}