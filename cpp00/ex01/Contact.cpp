#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {}

void Contact::setContact()
{
	std::cout << "Enter First Name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter Nickame: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter Phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter Darkest secret: ";
	std::getline(std::cin, darkest_secret);
}

void Contact::displayContact() const
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}