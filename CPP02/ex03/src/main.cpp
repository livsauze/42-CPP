/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:25:52 by livsauze          #+#    #+#             */
/*   Updated: 2024/11/02 16:00:03 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point insidePoint(2, 2);
    Point outsidePoint(12, 6);
	Point edgePoint(5, 0);
	
    if (bsp(a, b, c, insidePoint)) {
        std::cout << "insidePoint est à l'intérieur du triangle." << std::endl;
    } else {
        std::cout << "insidePoint est à l'extérieur du triangle." << std::endl;
    }

    if (bsp(a, b, c, outsidePoint)) {
        std::cout << "outsidePoint est à l'intérieur du triangle." << std::endl;
    } else {
        std::cout << "outsidePoint est à l'extérieur du triangle." << std::endl;
    }

	if (bsp(a, b, c, edgePoint)) {
        std::cout << "edgePoint est à l'intérieur du triangle." << std::endl;
    } else {
        std::cout << "edgePoint est à l'extérieur du triangle." << std::endl;
    }

    return 0;
}
