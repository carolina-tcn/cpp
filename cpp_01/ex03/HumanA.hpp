#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		//Weapon
	public:
		HumanA(std::string,Weapon &weapon);	
		void attack();
};	

# endif

