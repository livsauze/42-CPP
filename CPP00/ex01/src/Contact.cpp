/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:57:41 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/10 12:39:33 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::printTable(int index)
{
	std::cout << "| " << std::setw(5) << std::right << index << " | "
			  << std::setw(10) << std::right << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << " | "
			  << std::setw(10) << std::right << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << " | "
			  << std::setw(10) << std::right << (nickName.length() > 10 ? nickName.substr(0, 9) + "." : nickName) << "|"
			  << std::endl;
}

void Contact::printContact()
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void	Contact::setContactDetails(const std::string& fName, const std::string& lName, const std::string& nName, const std::string& pNumber,const std::string& dSecret)
{
	firstName = fName;
	lastName = lName;
	nickName = nName;
	phoneNumber = pNumber;
	darkestSecret = dSecret;
}
