/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:30:54 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/29 17:40:54 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main(void)
{
	std::srand(std::time(0));
	std::cout << "It's time to generate an object !" << std::endl;
	Base *randomBase = generate();
	std::cout << "\nIdentiying with pointers :" << std::endl;
	identify(randomBase);
	std::cout << "\nIdentiying with references :" << std::endl;
	identify(*randomBase);
	delete randomBase;
}