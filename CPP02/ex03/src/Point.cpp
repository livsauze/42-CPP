/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:28:27 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/02 15:41:05 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}
Point::Point(const float x, const float y) : _x(x), _y(y)
{	
}

Point::Point(const Point& other) : _x(other._x), _y(other._y)
{
}

Point::~Point()
{
}
Point& Point::operator=(const Point& other)
{
	if (this == &other) 
        return *this;
    return *this;
}

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}
