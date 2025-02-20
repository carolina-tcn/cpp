#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {}

std::string Contact::getFirst_name() const
{
	return (first_name);
}

std::string Contact::getLast_name() const
{
	return (last_name);
}

std::string Contact::getNickname() const
{
	return (nickname);
}

void Contact::getInput(const std::string &prompt, std::string &input)
{
	while(true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "❌ A saved contact can’t have empty fields.\n";
		else
			break;
	}
}

void Contact::setContact()
{
	getInput("\nEnter First Name: ", first_name);
	getInput("Enter Last Name: ", last_name);
	getInput("Enter Nickame: ", nickname);
	getInput("Enter Phone number: ", phone_number);
	getInput("Enter First Name: ", darkest_secret);
}

/*void Contact::displayContact()
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}*/



