/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:34:06 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 18:09:50 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FLAGTRAP_HPP
#define _FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FlagTrap : virtual public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(const std::string& name);
		FlagTrap(const FlagTrap& other);
		FlagTrap& operator=(const FlagTrap &other);
		~FlagTrap();
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif