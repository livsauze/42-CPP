/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:25:52 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/27 16:39:48 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	std::cout << "------------MANDATORY PART------------" << std::endl;
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	// Futher testing
	std::cout << "------------FURTHER TESTING------------" << std::endl;
	Fixed c = 10;
	Fixed const d = 2;
	std::cout  << "c = " << c << std::endl;
	std::cout  << "d = " << d << std::endl;
	Fixed res;
	bool res_b = c < d;
	
	std::cout << "c < d ? " << res_b << std::endl;
	res_b = c > d;
	std::cout << "c > d ? " << res_b << std::endl;
	res = c - d;
	std::cout << "c - d= " << res << std::endl;
	res = c / d;
	std::cout << "c / d= " << res << std::endl;

	return 0;
}