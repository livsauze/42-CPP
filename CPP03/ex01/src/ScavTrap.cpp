/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:04:54 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 15:39:42 by livsauze         ###   ########.fr       */
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
