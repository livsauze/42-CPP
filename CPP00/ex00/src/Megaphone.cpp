/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:34:56 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/19 15:11:52 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"

Megaphone::Megaphone()
{
	std::cout << "Constructor called" << std::endl;
}

Megaphone::~Megaphone()
{
	std::cout << "Destructor called" << std::endl;
}

void Megaphone::strUpperCase(std::vector<std::string> str)
{
    for (size_t i = 0; i < str.size(); i++)  // Parcourt tous les éléments du vecteur
    {
        for (size_t j = 0; j < str[i].length(); j++)  // Parcourt chaque caractère de la chaîne
        {
            std::cout << (char)std::toupper(str[i][j]);  // Convertit en majuscule et affiche
        }
        if (i < str.size() - 1)  // Ajoute un espace entre les mots, sauf après le dernier
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
