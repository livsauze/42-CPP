/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:37:35 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 18:12:06 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{}

FlagTrap::FlagTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "THIS IS A DIFFERENT MESSAGE, FlagTrap " << _name 
				<< " is created." << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other)
{
	std::cout << "FlagTrap " << this->_name <<  " is copied" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << "FlagTrap " << this->_name << " has been assigned." << std::endl;
	return (*this);
}

FlagTrap::~FlagTrap()
{
	std::cout << "THIS IS A DIFFERENT MESSAGE, FlagTrap " << _name 
				<< " is destroyed." << std::endl;
}

void	FlagTrap::attack(const std::string& target)
{
	if (_hitPoint <= 0)
	{
		std::cout << "FlagTrap " << _name << " cannot attack, he has no hit points left !" << std::endl;
		return;
	}
	if (_energyPoint > 0)
	{
		std::cout << "FlagTrap " << _name << " attacks "
				 << target << ", causing "
				 << _attackDamage << " points of damage !" << std::endl;
		_energyPoint--;
	}
	else
	{
		std::cout << "FlagTrap " << _name << " cannot attack, he has no energy points left !" << std::endl;
		return ;
	}
}

void	FlagTrap::highFivesGuys()
{
	std::cout << "This is a positive High Five affirmation from " << _name << std::endl;
}