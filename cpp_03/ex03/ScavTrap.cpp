#include "ScavTrap.hpp"
#include <iostream>
 
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default \033[1;34mScavTrap\033[0m constructor called, default name will be: " << BLUE << _name << RESET << " at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " constructor called at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " copy constructor called at " << this << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
  	std::cout << "Copy assignment operator called for \033[1;34mScavTrap\033[0m " << BLUE << _name << RESET " at " << this << std::endl;
	if (this != &other) 
		ClapTrap::operator=(other);
	return (*this);  
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " destructor called at " << this << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " attacks " 
		<< target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " doesn't have enough energy or is dead and can't attack." << std::endl;
	}
}

void ScavTrap::guardGate()
{
    std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " is now in Gate keeper mode" << std::endl;

}
