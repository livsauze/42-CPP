/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:41:58 by livsauze          #+#    #+#             */
/*   Updated: 2025/06/20 16:29:58 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap A("King");
	DiamondTrap B("Kong");

	A.getStatus();
	
	std::cout << "------------------------------------------------------" << std::endl;
	A.attack("Kong");
	B.takeDamage(A.getAttackDamage());
	A.whoAmI();
	std::cout << "------------------------------------------------------" << std::endl;
	return 0;
}