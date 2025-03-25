#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default \033[1;35mFragTrap\033[0m constructor called, default name will be: " << MAGENTA << _name << RESET << " at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << " constructor called at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << " copy constructor called at " << this << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
  	std::cout << "Copy assignment operator called for \033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << " at " << this << std::endl;
	if (this != &other) 
		ClapTrap::operator=(other);
	return (*this);  
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << " destructor called at " << this << std::endl;
}

 void FragTrap::highFivesGuys()
 {
    std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET
    << " wants to give everyone a high five! ✋" << std::endl;
 }

