/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:42:02 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/02 15:55:16 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Calcul de l'aire via la formule : |(x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)) / 2|
Fixed triangleArea(Point const &p1, Point const &p2, Point const &p3)
{
    return Fixed((p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
                  p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
                  p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ABC = triangleArea(a, b, c);
	Fixed ABP = triangleArea(a, b, point);
	Fixed BCP = triangleArea(b, c, point);
	Fixed CAP = triangleArea(c, a, point);
	
	return (ABP > 0 && BCP > 0 && CAP > 0 && (ABC == (ABP + BCP + CAP)));
}
