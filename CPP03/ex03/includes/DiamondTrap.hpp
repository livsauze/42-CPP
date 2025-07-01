/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:43:05 by livsauze          #+#    #+#             */
/*   Updated: 2025/06/20 16:27:53 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap
{
	private: 
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();
		using ScavTrap::attack;
		void	getStatus();
		void	whoAmI();
};


#endif