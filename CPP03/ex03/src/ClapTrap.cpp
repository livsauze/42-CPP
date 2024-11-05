/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:20:20 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 18:11:29 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name <<  " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoint(other._hitPoint), _energyPoint(other._energyPoint), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << other._name <<  " is copied" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap other)
{
	if (this != &other)
	{
		_name = other._name;
		_attackDamage = other._attackDamage;
		_energyPoint = other._energyPoint;
		_hitPoint = other._hitPoint;
	}
		
	std::cout << "Assignment operator called" << std::endl;	
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name <<  " is destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoint <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot attack, he has no hit points left !" << std::endl;
		return;
	}
	if (_energyPoint > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks "
				 << target << ", causing "
				 << _attackDamage << " points of damage !" << std::endl;
		_energyPoint--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " cannot attack, he has no energy points left !" << std::endl;
		return ;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint <= 0)
	{ 
		std::cout << "ClapTrap " << _name << " is already dead........" << std::endl;
		return ;
	}
	_hitPoint = (_hitPoint > amount) ? _hitPoint - amount : 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points damage. Hit points remaining : " << _hitPoint << std::endl;
	if (_hitPoint == 0)
		std::cout << "ClapTrap " << _name << " died........" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired, he's already dead !" << std::endl;
		return;
	}
	if (_energyPoint > 0)
	{
		_hitPoint += amount;
		std::cout << "ClapTrap " << _name << " reapairs itself, gaining "
					<< amount << " hit points. Hit point remaining : "
					<< _hitPoint << std::endl;
		_energyPoint--;
	}
	else	
		std::cout << "ClapTrap " << _name << " cannot repairs itself, he has no energy points left !" << std::endl;
 
}

unsigned int	ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}