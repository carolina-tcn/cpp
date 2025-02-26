#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;		
			
	public:
		Zombie();
		~Zombie();
		//The destructor must
		//print a message with the name of the zombie for debugging purposes.
		void announce();
		
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
};

#endif
