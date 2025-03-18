/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:51:11 by livsauze          #+#    #+#             */
/*   Updated: 2025/01/10 17:37:28 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("Bob");
	ClapTrap trap("Jim");
	ScavTrap scav("R2-D2");

	std::cout << "-------------------------------------------" << std::endl;
	clap.attack("Jim");
	trap.takeDamage(clap.getAttackDamage());
	scav.guardGate();
	scav.attack("Bob");
	clap.takeDamage(scav.getAttackDamage());
	clap.beRepaired(5);
	trap.attack("Bob");
	clap.takeDamage(trap.getAttackDamage());
	clap.beRepaired(5);
	std::cout << "-------------------------------------------" << std::endl;
	return 0;
}
