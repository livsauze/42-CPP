/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:18:49 by livsauze          #+#    #+#             */
/*   Updated: 2025/03/17 16:49:12 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Default Brain constructor has been called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "ideas";
}

Brain::Brain( const Brain& other ) {
    for (int i = 0; i < 100; ++i) {
        this->_ideas[i] = other._ideas[i];
    }
	std::cout << "Brain copy" << std::endl;
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