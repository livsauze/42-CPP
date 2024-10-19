/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:41:37 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/19 17:37:48 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Fixed_HPP
#define _FIXED_HPP

#include <iostream>

	class Fixed
	{
		private:
			int value;
			static const int bits = 8;
		public:
			Fixed();
			Fixed(const Fixed& other);
			Fixed& operator=(const Fixed &other);
			~Fixed();
			int getRawBits( void ) const;
			void setRawBits( int const raw );
	};
	
 #endif