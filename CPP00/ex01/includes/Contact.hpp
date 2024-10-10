/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:55:08 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/08 16:38:55 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Contact(void);
		~Contact();
		void	setContactDetails(const std::string& fName, const std::string& lName, const std::string& nName, const std::string& pNumber, const std::string& dSecret);
		void	printTable(int index);
		void	printContact();
};

#endif