/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:44:53 by livsauze          #+#    #+#             */
/*   Updated: 2025/06/05 16:36:35 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>


template <typename T, typename F>
void	iter(T* array, size_t length, F function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}
template <typename T, typename F>
void	iter(const T* array, size_t length, F function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}
#endif