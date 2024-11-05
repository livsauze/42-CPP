/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:51:11 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 15:25:24 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Bob");
	ClapTrap trap("Jim");

	clap.attack("Jim");
	trap.takeDamage(clap.getAttackDamage());
	clap.takeDamage(6);
	clap.beRepaired(5);
	clap.takeDamage(10);
	trap.attack("Bob");
	clap.takeDamage(trap.getAttackDamage());
	clap.beRepaired(5);
}