//#include "PhoneBook.hpp"
//#include "Contact.hpp"
#include <iostream>
//ctrl+v + ctr+m y ctr+d

int main()
{
	//PhoneBook newPhoneBook; creo la instancia.
	std::string input;

	//print commands
	std::cout << std::setw(10) << "*Welcome to my PhoneBook*" << std::endl
			  << "This program only accepts ADD, SEARCH and EXIT." << std::endl
			  << "Now is your turn: ";
	
	while (true)
	{
		// si uso cin antes ---> std::cin.ignore();
		std::getline(std::cin, input);
		std::cout << "Your input is: " << input << std::endl;
		if (input == "EXIT")
			return (0);
		else if (input== "ADD")
		{
			break;
		}
		else if (input == "SEARCH")
		{
			break;
		}	
	}
	return (0);
}
