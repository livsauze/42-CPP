/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:50:03 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 18:16:44 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default")
{
	_name =  "defaultName";
	_hitPoint = FlagTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FlagTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " has been created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->_hitPoint = FlagTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FlagTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been created." << std::endl;	
}
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FlagTrap(other)
{
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been copied." << std::endl;	
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << this->_name << " has been assigned." << std::endl;	
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed." << std::endl;	

}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " while my other name is " << ClapTrap::_name << std::endl;
}