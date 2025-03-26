#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(std::string name); 
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap& operator=(const DiamondTrap &other);
        ~DiamondTrap();

        void attack(const std::string& target);   
        void whoAmI();

};
