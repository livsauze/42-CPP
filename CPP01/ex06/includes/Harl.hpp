/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:45:11 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/19 12:30:55 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP
#define _HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void (Harl::*fct[4])(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif