/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:14:40 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/12 17:09:48 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 8;
	Zombie* horde = zombieHorde(N, "HordeZombie");

	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}