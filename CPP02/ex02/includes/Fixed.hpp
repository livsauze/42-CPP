/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:41:37 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/27 16:13:16 by livsauze         ###   ########.fr       */
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
			friend std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
			bool operator>(const Fixed& other) const;
			bool operator<(const Fixed& other) const;
			bool operator>=(const Fixed& other) const;
			bool operator<=(const Fixed& other) const;
			bool operator==(const Fixed& other) const;
			bool operator!=(const Fixed& other) const;
			Fixed operator+(const Fixed& other) const;
			Fixed operator-(const Fixed& other) const;
			Fixed operator*(const Fixed& other) const;
			Fixed operator/(const Fixed& other) const;
			Fixed& operator++(); //++i
			Fixed operator++(int); //i++
			Fixed& operator--(); //--i
			Fixed operator--(int); //i--
			
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat(void) const;
			int	toInt(void) const;
			static Fixed& min(Fixed& a, Fixed& b);
			const static Fixed& min(Fixed const& a, Fixed const& b);
			static Fixed& max(Fixed& a, Fixed& b);
			const static Fixed& max(Fixed const& a, Fixed const& b);
	};
	
 #endif