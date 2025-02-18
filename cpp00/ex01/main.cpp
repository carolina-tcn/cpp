//#include "PhoneBook.hpp"
//#include "Contact.hpp"
#include <iostream>
//ctrl+v + ctr+m y ctr+d

int main()
{
	//PhoneBook newPhoneBook; instancia!
	std::string command;

	//print commands
	std::cout << "*Welcome to my PhoneBook*" << std::endl
			  << "This program only accepts ADD, SEARCH and EXIT." << std::endl
			  << "Now is your turn: ";

	std::getline(std::cin, command);
	std::cout << "Your input is: " << command << std::endl;
	
	/*while (true)
	{
		if (command == "EXIT")
		{

		}
		else if (command == "ADD")
		{

		}
		else if (command == "SEARCH")
		{

		}	
	}*/
	return (0);
}
