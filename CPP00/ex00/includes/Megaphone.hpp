/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:44:59 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/19 15:06:06 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MEGAPHONE_HPP
#define _MEGAPHONE_HPP

#include <iostream>
#include <string>
#include <vector>

class Megaphone
{
	public:
		Megaphone();
		~Megaphone();
		void strUpperCase(std::vector<std::string> str);
};

#endif