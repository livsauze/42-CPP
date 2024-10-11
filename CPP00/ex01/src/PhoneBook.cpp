/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:34:49 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/10 16:32:53 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestContact(0) {}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(Contact& contact)
{
	if (contactCount < CONTACT_NB)
	{
		contacts[contactCount] = contact;
		contactCount++;
	}
	else if (contactCount == CONTACT_NB)
	{
		contacts[oldestContact] = contact;
		oldestContact += 1;
		if (oldestContact == CONTACT_NB)
		oldestContact = 0;
	}
}
void PhoneBook::printContacts()
{
	std::cout << "| Index | First Name | Last Name  | Nickname  |" << std::endl;
	for (int i = 0; i < contactCount; i++) {
		contacts[i].printTable(i + 1);
	}
}

void	PhoneBook::searchContact()
{
	int		index;
	if (contactCount == 0)
	{
		std::cout << "No contact available, please ADD a contact" << std::endl;
		return ;
	}
	printContacts();
	std::cout << "Please enter an index" << std::endl;
	while (!(std::cin >> index) || index < 1 || index > contactCount || std::cin.peek() != '\n')
	{
		if (std::cin.eof())  // Détecter si Ctrl-D a été pressé
		{
			std::cout << "EOF detected. Exiting search." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return ;
		}
		
			std::cout << "Index invalid, please enter a number between 1 and "<<contactCount<< "" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	contacts[index - 1].printContact();
}
