/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:51:11 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 16:54:58 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int	main(void)
{
	FlagTrap flag("Flo");
	ScavTrap scav("R2-D2");
	ClapTrap clap("Bob");
	ClapTrap trap("Jim");

	std::cout << "------------------------------------------------------" << std::endl;
	clap.attack("Jim");
	trap.takeDamage(clap.getAttackDamage());
	scav.attack("Bob");
	clap.takeDamage(scav.getAttackDamage());
	scav.attack("Flag");
	flag.takeDamage(scav.getAttackDamage());
	flag.highFivesGuys();
	flag.attack("Bob");
	clap.takeDamage(flag.getAttackDamage());
	clap.beRepaired(5);
	trap.attack("Bob");
	clap.takeDamage(trap.getAttackDamage());
	clap.beRepaired(5);
	std::cout << "------------------------------------------------------" << std::endl;
	return 0;
}