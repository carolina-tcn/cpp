#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

#include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::nickname;
		std::string phone_number; //string o array de int¿?
	public:
		Contact();
		void NewContact();//Método para add contact
		void ShowContact();//Método para search contact
			//SETFILL <iomanip> 10 chars
		~Contact();
};

#endif
