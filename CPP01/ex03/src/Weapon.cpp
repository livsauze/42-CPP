/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:49:41 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/15 16:24:29 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{
}
Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(const std::string& newtype)
{
	type = newtype;
}