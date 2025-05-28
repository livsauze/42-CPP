/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:41:50 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/28 18:01:55 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base* generate(void)
{
	int random = rand() % 3;
	
	switch(random)
	{
		case 0 :
			std::cout << "Creating a type A object" << std::endl;
			return (new A);
		case 1 :
			std::cout << "Creating a type B object" << std::endl;
			return (new B);
		case 2 :
			std::cout << "Creating a type C object" << std::endl;
			return (new C);
	}
	return NULL;
}