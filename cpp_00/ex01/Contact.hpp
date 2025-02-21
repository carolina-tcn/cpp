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
		void getInput(const std::string &prompt, std::string &input);


		std::string getFirst_name() const;
		std::string getLast_name() const;
		std::string getNickname() const;
		std::string getPhone_number() const;
		std::string getDarkest_secret() const;
};

#endif
