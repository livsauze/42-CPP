/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:08:42 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/12 16:36:25 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie(std::string name);
		~Zombie();
		void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif