/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:14:38 by ctacconi          #+#    #+#             */
/*   Updated: 2025/02/27 11:18:22 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

# define MAX_CONTACTS 8
# define EXIT_SUCCESS 0

class PhoneBook
{	
	private:
		Contact contacts[MAX_CONTACTS];
		int contact_idx;
		int contact_count;

	public:
		PhoneBook();

		void addContact();
		void searchContact();
		void displaySavedContacts() const;
		void displayContact(const int &index) const;

		std::string formatWidth(const std::string &str) const;
};

#endif
