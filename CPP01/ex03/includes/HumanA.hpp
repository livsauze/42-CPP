/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:52:40 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/17 13:01:05 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP
# define _HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	private :
		std::string name;
		Weapon& weapon;
	public : 
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();
		void	attack() const;
};

#endif