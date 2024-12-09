/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:14:58 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/01 17:19:52 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();
};



#endif