/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:25:31 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/18 16:26:49 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog has been created" << std::endl;
	_brain = new Brain();

}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Animal of type  " << other._type <<  " is copied" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
    if (this != &other) {
        Animal::operator=(other);
        this->_brain = other._brain;
    }
    return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "The Dog has been destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WOAF WOAf Woaf woaf" << std::endl;
}