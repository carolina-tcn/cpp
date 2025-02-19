#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
		Contact();
		void setContact();
		void displayContact() const;
		~Contact();

		std::string getfirst_name() const;
		std::string getlast_name() const;
		std::string getnickname() const;
};

#endif
