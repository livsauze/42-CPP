/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:37:18 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/19 15:53:31 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cerr << "Error : Invalid nb of arguments. Try \"./harlFilter <level>\"" << std::endl;
		return (1);
	}
	Harl harlFilter;
	std::string arg;
	int	arg_code;

	arg.assign(av[1]);
	arg_code = (arg == "DEBUG") * 1 + (arg == "INFO") * 2 + (arg == "WARNING") * 3 + (arg == "ERROR") * 4;
	switch (arg_code)
	{
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			harlFilter.complain("DEBUG");
			std::cout << std::endl;
			std::cout << "[ INFO ]" << std::endl;
			harlFilter.complain("INFO");
			std::cout << std::endl;
			std::cout << "[ WARNING ]" << std::endl;
			harlFilter.complain("WARNING");
			std::cout << std::endl;
			std::cout << "[ ERROR ]" << std::endl;
			harlFilter.complain("ERROR");
			std::cout << std::endl;
			break;
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			harlFilter.complain("INFO");
			std::cout << std::endl;
			std::cout << "[ WARNING ]" << std::endl;
			harlFilter.complain("WARNING");
			std::cout << std::endl;
			std::cout << "[ ERROR ]" << std::endl;
			harlFilter.complain("ERROR");
			std::cout << std::endl;
			break;
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			harlFilter.complain("WARNING");
			std::cout << std::endl;
			std::cout << "[ ERROR ]" << std::endl;
			harlFilter.complain("ERROR");
			std::cout << std::endl;
			break;
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			harlFilter.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}	
	
}