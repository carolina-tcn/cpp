/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:14:06 by ctacconi          #+#    #+#             */
/*   Updated: 2025/02/27 11:21:10 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

void PhoneBook::displayContact(const int &index) const
{
	std::cout << "First Name: " << contacts[index].getFirst_name() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLast_name() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhone_number() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkest_secret() << std::endl;
}

void PhoneBook::searchContact()
{
	std::string idx;
	int index;

	if (!contact_count)
	{
		std::cout << "❗️The PhoneBook is empty." << std::endl;
		return;
	}
	PhoneBook::displaySavedContacts();
	while (true)
	{
		std::cout << "Enter an index to display a contact: ";
		if (!std::getline(std::cin, idx))
		{
				std::cout << "\n❌ EOF detected 👋👋👋..." << std::endl;
				exit(EXIT_SUCCESS);
		}
		else if (idx.length() == 1 && idx[0] >= '1' && idx[0] <= '8')
		{
			index = idx[0] - '1';

			if (index >= contact_count)
			{
				std::cout << "❌ No contact exists in that position.\n";
        		continue;
			}
			PhoneBook::displayContact(index);
			break;
		}
		else
			std::cout << "❗️Please, enter a valid index.\n";
	}

}

