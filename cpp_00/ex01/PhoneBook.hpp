#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
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

		void addContact();
		void searchContact();
		void displaySavedContacts() const;
		void displayContact(const int &index) const;

		std::string formatWidth(const std::string &str) const;
};

#endif
