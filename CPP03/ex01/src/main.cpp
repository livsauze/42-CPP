/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:51:11 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 15:25:08 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("Bob");
	ClapTrap trap("Jim");
	ScavTrap scav("R2D2");

	clap.attack("Jim");
	trap.takeDamage(clap.getAttackDamage());
	scav.attack("Bob");
	clap.takeDamage(scav.getAttackDamage());
	clap.beRepaired(5);
	trap.attack("Bob");
	clap.takeDamage(trap.getAttackDamage());
	clap.beRepaired(5);
}