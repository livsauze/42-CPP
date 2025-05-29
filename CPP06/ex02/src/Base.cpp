/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:41:50 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/29 17:36:02 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}
// Generating a random object of type A/B/C
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
// Identying the type of the object. dynamic_cast<> is used for derived classes
// With pointers we can check if NULL is returned
void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "Object of type A identified" << std::endl;
		return;
	}
	else if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "Object of type B identified" << std::endl;
		return;
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "Object of type C identified" << std::endl;
		return;
	}
	std::cout << "Error : Unknown type" << std::endl;
}

// With references we have to catch exceptions
// <typeinfo> is forbidden, we can't catch the bad_cast exception so we catch any exception
void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Object of type A identified" << std::endl;
		return;
	}
	catch (...){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Object of type B identified" << std::endl;
		return;
	}
	catch (...){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Object of type C identified" << std::endl;
		return;
	}
	catch (...){}
	std::cout << "Error : Unknown type" << std::endl;
}
