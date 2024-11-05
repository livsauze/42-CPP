/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:04:54 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 17:21:03 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
	std::cout << "ScavTrap " << _name <<  " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << other._name <<  " is copied" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap " << this->_name << " has been assigned" << std::endl;
	return (*this);
}


ScavTrap::~ScavTrap()
{
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoint <= 0)
	{
		std::cout << "ScavTrap " << _name << " cannot attack, he has no hit points left !" << std::endl;
		return;
	}
	if (_energyPoint > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks "
				 << target << ", causing "
				 << _attackDamage << " points of damage !" << std::endl;
		_energyPoint--;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " cannot attack, he has no energy points left !" << std::endl;
		return ;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}