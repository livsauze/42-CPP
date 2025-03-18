/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:19:36 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/09 15:22:55 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		void makeSound() const;
};

#endif