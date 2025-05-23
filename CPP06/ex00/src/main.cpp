/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:58:43 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/23 15:57:10 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int	main(int ac, char ** av)
{
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else if (ac == 1)
		std::cout << "Error : empty string !" << std::endl;
	else
		std::cout << "Error : invalid input, please enter only one literal string !" << std::endl;
	return 0;
}