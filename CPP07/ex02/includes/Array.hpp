/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:44:53 by livsauze          #+#    #+#             */
/*   Updated: 2025/06/05 17:20:05 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>


template <typename T>
class Array
{
	private :
		T value;
	public :
	Array();
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();
}

#endif