#include <string>
#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie *zombie_ptr = newZombie("Zombie_heap");
	zombie_ptr->announce();

	randomChump("Zombie_stack");

	delete zombie_ptr;
	return (0);
}
