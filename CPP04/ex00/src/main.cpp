/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:35:11 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/01 16:57:54 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal("Meta");
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	
	std::cout << "-----------------------------------------------" << std::endl;
	const   WrongAnimal* wrongAnimal = new WrongAnimal();
    const   WrongAnimal* otherAnimal = new WrongCat();

    wrongAnimal->makeSound();
    otherAnimal->makeSound();

    delete wrongAnimal;
    delete  otherAnimal;
	return 0;
}