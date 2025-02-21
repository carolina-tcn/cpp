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

std::string Contact::getPhone_number() const
{
	return (phone_number);
}

std::string Contact::getDarkest_secret() const
{
	return (darkest_secret);
}

void Contact::getInput(const std::string &prompt, std::string &input)
{
	while(true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
				std::cout << "\n❌ EOF detected 👋🏽👋🏽👋🏽..." << std::endl;
				exit(EXIT_SUCCESS);
		}
		else if (input.empty())
			std::cout << "❌ A saved contact can’t have empty fields.\n";
		else
			break;
	}
}

void Contact::setContact()
{
	getInput("Enter First Name: ", first_name);
	getInput("Enter Last Name: ", last_name);
	getInput("Enter Nickame: ", nickname);
	getInput("Enter Phone number: ", phone_number);
	getInput("Enter Darkest secret: ", darkest_secret);
}





