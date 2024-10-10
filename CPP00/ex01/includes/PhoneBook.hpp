/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livsauze <livsauze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:35:43 by livsauze          #+#    #+#             */
/*   Updated: 2024/10/10 16:00:18 by livsauze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP
# define _PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <string>

# include "Contact.hpp"
# define CONTACT_NB 8

class PhoneBook
{
	private:
		Contact	contacts[CONTACT_NB];
		int		contactCount;
		int		oldestContact;
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(Contact& contact);
		void	searchContact(void);
		void	printContacts(void);
};

#endif
