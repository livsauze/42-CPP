/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:26:12 by livsauze          #+#    #+#             */
/*   Updated: 2025/01/10 17:15:06 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
}

AMateria::AMateria(const std::string& type) : _type(type)
{
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		_type = other.getType();
	}
	return *this;
}

AMateria::~AMateria()
{
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* use a weapon at " << target.getName() << std::endl;
}

std::string const& AMateria::getType() const
{
	return _type;
}