/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:35:11 by livsauze          #+#    #+#             */
/*   Updated: 2025/01/08 16:06:28 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "----------------------Basic testing----------------------" << std::endl;
	std::cout << std::endl;
	const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

	std::cout << std::endl;
	std::cout << "---------------------Further testing---------------------" << std::endl;
	std::cout << std::endl;
	
    const   Animal* animals[10];
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
	std::cout << std::endl;
	std::cout << "************** No leaks pleaseee !!!! **************" << std::endl;
	std::cout << std::endl;
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }
    return 0;
