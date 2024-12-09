/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:35:25 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/09 15:22:31 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat has been created" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Animal of type  " << other._type <<  " is copied" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
    if (this != &other) {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}


Cat::~Cat()
{
	delete _brain;
	std::cout << "The Cat has been destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MIAAOUUUUUUUUUUUUuuuuu" << std::endl;
}