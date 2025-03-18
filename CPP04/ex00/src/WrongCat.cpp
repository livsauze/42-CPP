/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:40:50 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/17 15:10:58 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat has been created" << std::endl;
}


WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "Animal of type  " << other._type <<  " is copied" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "Assignment operator called" << std::endl;	
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "The WrongCat has been destroyed" << std::endl;
}
