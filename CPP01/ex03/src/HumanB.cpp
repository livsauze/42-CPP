/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:03:51 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/17 13:02:10 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}