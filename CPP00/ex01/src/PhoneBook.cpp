/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:34:49 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/10 13:18:40 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

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
		contacts[0] = contact;
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
	std::string index_s;
	if (contactCount == 0)
	{
		std::cout << "No contact available, please ADD a contact" << std::endl;
		return ;
	}
	printContacts();
	std::cout << "Please enter an index" << std::endl;
	while (!(std::cin >> index) || index < 1 || index > contactCount || std::cin.peek() != '\n')
	{
		if (!std::getline(std::cin, index_s))
		{
			std::cout << "EOF detected." << std::endl;
			return ;
		}
		std::cout << "Index invalid, please enter a number between 1 and "<<contactCount<< "";
		std::cin.clear();
	}
	contacts[index - 1].printContact();
}