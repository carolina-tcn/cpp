#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_idx(0), contact_count(0) {}

std::string PhoneBook::formatWidth(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	return (str);
}

void PhoneBook::addContact()
{
	contacts[contact_idx].setContact();

	if (contact_count < MAX_CONTACTS)
		contact_count++;
	contact_idx = (contact_idx + 1) % 8;
}

void PhoneBook::displaySavedContacts() const
{
	std::cout << std::right << std::setw(10) << "INDEX" << " | "
   			<< std::right << std::setw(10) << "FIRST_NAME" << " | "
			<< std::right << std::setw(10) << "LAST_NAME" << " | "
			<< std::right << std::setw(10) << "NICKNAME" << std::endl;

	for(int i = 0; i < contact_count; ++i)
	{
		std::cout << std::right << std::setw(10) << (i + 1) << " | " 
				<< std::right << std::setw(10) << formatWidth(contacts[i].getFirst_name()) << " | "
				<< std::right << std::setw(10) << formatWidth(contacts[i].getLast_name()) << " | "
				<< std::right << std::setw(10) << formatWidth(contacts[i].getNickname()) << std::endl;
	}
}

void PhoneBook::searchContact()
{
	if (contact_count == 0)
	{
		std::cout << "\n❗️The PhoneBook is empty." << std::endl;
		return ;
	}
	PhoneBook::displaySavedContacts();
}

