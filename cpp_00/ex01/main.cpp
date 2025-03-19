/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:12:33 by ctacconi          #+#    #+#             */
/*   Updated: 2025/02/27 11:13:38 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

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
			 << "Enter a command --> ADD, SEARCH or EXIT: " << std::endl;
		if (!std::getline(std::cin, command))
		{
			if(std::cin.eof())
			{
				std::cout << "❌ EOF detected 👋👋👋..." << std::endl;
				break;
			}
			break;
		}

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

