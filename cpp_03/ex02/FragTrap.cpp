#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default \033[1;35mFragTrap\033[0m constructor called, default name will be: " << MAGENTA << _name << RESET << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << " constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
  	std::cout << "Copy assignment operator called for \033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET << std::endl;
	if (this != &other) 
		ClapTrap::operator=(other);
	return (*this);  
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;35mFragTrap\033[0m " << MAGENTA << _name << RESET " destructor called" << std::endl;
}
