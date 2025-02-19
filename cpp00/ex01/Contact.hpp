#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	
	public:
		Contact();
		void setContact();
		void displayContact() const;
		~Contact();
};

#endif
