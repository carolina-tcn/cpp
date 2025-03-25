#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called, default name will be: " <<  _name << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
  	std::cout << "Copy assignment operator called for FragTrap " << _name << std::endl;
	if (this != &other) 
		ClapTrap::operator=(other);
	return (*this);  
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}