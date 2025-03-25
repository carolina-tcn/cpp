#pragma once

#include "ClapTrap.hpp"

//HERENCIASSSSSSS == INHERITANCE
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(); // constructor por defecto
        ScavTrap(std::string name); // constructor con nombre
        ScavTrap(const ScavTrap &other); // constructor con copia
        ScavTrap& operator=(const ScavTrap &other);
        ~ScavTrap();// destructor
   
   	    void attack(const std::string& target); // attack ()
        void guardGate();
};
