/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:41:58 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/05 18:16:56 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap A("King");
	DiamondTrap B("Kong");
	
	std::cout << "------------------------------------------------------" << std::endl;
	A.attack("Kong");
	B.takeDamage(A.getAttackDamage());
	A.whoAmI();
	std::cout << "------------------------------------------------------" << std::endl;
	return 0;
}