/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:52:42 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/03 18:05:25 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const std::string& name);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif