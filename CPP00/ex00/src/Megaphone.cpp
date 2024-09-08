/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:34:56 by livsauze          #+#    #+#             */
/*   Updated: 2024/09/06 13:34:58 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; av[i]; i++)
		{
			for (j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
			if (av[i][j] && av[i][j - 1] != ' ')
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}