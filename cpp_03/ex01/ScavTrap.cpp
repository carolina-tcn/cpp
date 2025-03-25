#include "ScavTrap.hpp"
#include <iostream>
 
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called, default name will be: " <<  _name << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

// ScavTrap::ScavTrap(std::string name); // constructor con nombre
// ScavTrap::ScavTrap(const ScavTrap &other); // constructor con copia
// ScavTrap::ScavTrap& operator=(const ScavTrap &other);
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

// void ScavTrap::attack(const std::string& target); // attack ()
// void ScavTrap::guardGate();
