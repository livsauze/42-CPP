/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:14:40 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/12 16:38:07 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// Creating zombie in the stack
	randomChump("Stack");
	
	// Creating zombie in the heap
	Zombie	*heapZombie = newZombie("Heap");
	heapZombie->announce();
	// Free memory allocated
	delete heapZombie;
	return (0);
}