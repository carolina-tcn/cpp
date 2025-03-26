#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), _name("Default")
{
    std::cout << "Default \033[1;33mFragTrap\033[0m constructor called, default name will be: " << YELLOW << _name << RESET << " at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
}
// DiamondTrap::DiamondTrap(std::string name); 
// DiamondTrap::DiamondTrap(const DiamondTrap &other);
// DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other);

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[1;33mDiamondTrap\033[0m " << YELLOW << _name << RESET << " destructor called at " << this << std::endl;
}

//void DiamondTrap::attack();  

void DiamondTrap::whoAmI()
{
    std::cout << "\033[1;33mDiamondTrap\033[0m name: " << YELLOW << _name << RESET << ", \033[1;32mClapTrap\033[0m name: " << GREEN << ClapTrap::_name << RESET << std::endl;
}
