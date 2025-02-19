#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{	
	private:
		Contact contacts[MAX_CONTACTS];
		int contact_idx;
		int contact_count;

	public:
		PhoneBook();
		~PhoneBook();

		void addContact();
		void searchContact() const;
		
};

#endif
