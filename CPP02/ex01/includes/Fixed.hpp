/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:41:37 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/24 15:01:15 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Fixed_HPP
#define _FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

	class Fixed
	{
		private:
			int value;
			static const int bits = 8;
		public:
			Fixed();
			Fixed(const int iValue);
			Fixed(const float fValue);
			Fixed(const Fixed& other);
			~Fixed();
			Fixed& operator=(const Fixed& other);
			friend std::ostream& operator<<(std::ostream& out, const Fixed &fixed);
			float toFloat(void) const;
			int	toInt(void) const;
			int getRawBits( void ) const;
			void setRawBits( int const raw );
	};
	
 #endif