#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_idx(0), contact_count(0) {}

void PhoneBook::addContact()
{
	contacts[contact_idx].setContact();

	if (contact_count < MAX_CONTACTS)
		contact_count++;
	contact_idx = (contact_idx + 1) % 8;

}