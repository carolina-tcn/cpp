#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{	
	private://data members
		Contact contacts[8];
		int index;

	public://function members
		PhoneBook(); //constructor solo lo declaro en .hpp y lo defino en el .cpp
		void AddContact();
		void PrintContact();
		void SearchContact();
		~PhoneBook(); //destructor
};

#endif
