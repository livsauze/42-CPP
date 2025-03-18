/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:35:11 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/18 12:21:08 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "---------------------Further testing---------------------" << std::endl;
	std::cout << std::endl;
	
   const	Animal* animals[10];
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
	std::cout << std::endl;
	std::cout << "************It's time to make some noise************" << std::endl;
	std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        animals[i]->makeSound();
    }
	std::cout << "************Copying Cat************" << std::endl;
	std::cout << std::endl;
	Cat *cat = new Cat;
	Cat catCopy(*cat);
	delete cat;
	catCopy.makeSound();
	std::cout << std::endl;
	std::cout << "************** No leaks !!!**************" << std::endl;
	std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
    return 0;
}