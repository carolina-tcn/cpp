#include <iostream>
#include <string>
#include "PhoneBook.hpp"
//#include "Contact.hpp"


//ctrl+v + ctr+m y ctr+d

void toupper_string(std::string& command)
{
	for(size_t i = 0; i < command.length(); ++i)
		command[i] = std::toupper(command[i]);

}
int main()
{
	PhoneBook phonebook;
	std::string command;
	
	while (true)
	{
		std::cout << "\n\t\t*🔎 Welcome to my PhoneBook 📞*\n" << std::endl
			 << "Enter a command --> ADD, SEARCH or EXIT: ";
		std::getline(std::cin, command);	
		toupper_string(command);
	
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else
			std::cout << "❌ Invalid command" << std::endl;
	}
	return (0);
}
