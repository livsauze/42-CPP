/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:31:03 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/18 12:20:41 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <iomanip>

class Animal
{
	protected :
		std::string _type;
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		std::string getType() const;
		virtual void	makeSound() const = 0;
};

#endif