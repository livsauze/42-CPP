/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:41:41 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/28 17:21:28 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <stdint.h>

class Serializer
{
	private :
		Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		~Serializer();
	public :
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif