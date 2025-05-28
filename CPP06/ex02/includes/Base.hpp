/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:33:09 by livsauze          #+#    #+#             */
/*   Updated: 2025/05/28 18:03:12 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Base
{
	public :
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif