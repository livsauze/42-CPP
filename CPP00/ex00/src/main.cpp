/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:46:46 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/19 15:13:06 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		Megaphone Megaphone;
		
		std::vector<std::string> args;
		for (int i = 1; i < ac; ++i)
			args.push_back(std::string(av[i]));
		Megaphone.strUpperCase(args);
	}
}