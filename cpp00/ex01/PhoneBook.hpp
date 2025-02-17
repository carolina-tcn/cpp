#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts;
	public:
		PhoneBook(); //constructor solo lo declaro y lo defino en el .cpp
		void AddContact();
		void PrintContact();
		void SearchContact();
		~PhoneBook(); //destructos
	//Método para ADD contact y reemplazar el último contacto
	//por el mas reciente
};

#endif
