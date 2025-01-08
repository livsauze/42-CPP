/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:18:49 by livsauze          #+#    #+#             */
/*   Updated: 2024/12/09 15:05:55 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Default Brain constructor has been called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "ideas";
}

Brain::Brain( const Brain& other ) {
    *this = other;
}

Brain& Brain::operator=( const Brain& other ) {
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor has been called" << std::endl;
}