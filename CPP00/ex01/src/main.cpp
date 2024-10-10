/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:58:55 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/10 15:48:30 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	validPrompt(std::string prompt)
{
	if (prompt == "EXIT" or prompt == "ADD" or prompt == "SEARCH")
		return (1);
	std::cout << "Unrecognized command, type ADD/SEARCH/EXIT." << std::endl;
	return (0);
}

bool isOnlyDigits(const std::string& str)
{
    for (size_t i = 0; i < str.length(); ++i)
	{
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool isOnlyWhiteSpaces(const std::string& str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!iswspace(str[i]))
			return true;
	}
	return false;
}

int	getContactDetails(Contact& contact)
{
	std::string fName, lName, nName, pNumber, dSecret;
	bool validInput = false;

	do
	{
		std::cout << "First Name : ";
		if (!std::getline(std::cin, fName))
		{	std::cout << "EOF detected. Exiting program." << std::endl;
			return (0);}
		if (isOnlyWhiteSpaces(fName))
			validInput = true;
	} while (!validInput);
	validInput = false;
	do
	{
		std::cout << "Last Name : ";
		if (!std::getline(std::cin, lName))
		{	std::cout << "EOF detected. Exiting program." << std::endl;
			return (0);}
		if (isOnlyWhiteSpaces(lName))
			validInput = true;
	} while (!validInput);
	validInput = false;
	do
	{
		std::cout << "Nick Name : ";
		if (!std::getline(std::cin, nName))
		{	std::cout << "EOF detected. Exiting program." << std::endl;
			return (0);}
		if (isOnlyWhiteSpaces(nName))
			validInput = true;
	} while (!validInput);
	validInput = false;
	do
	{
		std::cout << "Phone Number : ";
		if (!std::getline(std::cin, pNumber))
		{	std::cout << "EOF detected. Exiting program." << std::endl;
			return (0);}
		if (isOnlyDigits(pNumber) && isOnlyWhiteSpaces(pNumber))
			validInput = true;
		else
			std::cout << "Invalid phone number. Please use only digits" << std::endl;
	} while (!validInput);
	validInput = false;
	do
	{
		std::cout << "Darkest Secret : ";
		if (!std::getline(std::cin, dSecret))
		{	std::cout << "EOF detected. Exiting program." << std::endl;
			return (0);}
		if (isOnlyWhiteSpaces(dSecret))
			validInput = true;
	} while (!validInput);
	contact.setContactDetails(fName, lName, nName, pNumber, dSecret);
	return (1);
}

int main (void)
{
	PhoneBook phoneBook;
	std::string menuPrompt;
	std::cout << "Welcome to your PhoneBook !" << std::endl;
	std::cout << "You can ADD and SEARCH a contact or EXIT the program." << std::endl;

	while (1)
	{
		do
		{
			std::cout << "Please enter a comand" << std::endl;
			if (!std::getline(std::cin, menuPrompt))
			{
				std::cout << "EOF detected. Exiting program." << std::endl;
				return (0) ;
			}
		} while(!validPrompt(menuPrompt));
		if (menuPrompt == "EXIT")
			return (0);
		else if (menuPrompt == "ADD")
		{
			Contact contact;
			if (getContactDetails(contact))
				phoneBook.addContact(contact);
		}
		else if (menuPrompt == "SEARCH")
			phoneBook.searchContact();
	}
	return (0);
}
