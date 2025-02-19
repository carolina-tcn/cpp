#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{	
	private:
		Contact _contacts[8];
		int index;

	public:/
		PhoneBook();
		void addContact();
		void searchContact() const;
		~PhoneBook();
};

#endif
