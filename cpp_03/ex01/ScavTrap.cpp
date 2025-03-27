/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:54:31 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/27 11:54:32 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
 
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called, default name will be: " <<  _name << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
  	std::cout << "Copy assignment operator called for ScavTrap " << _name << std::endl;
	if (this != &other) 
		ClapTrap::operator=(other);
	return (*this);  
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " 
		<< target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " doesn't have enough energy or is dead and can't attack." << std::endl;
	}
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;

}
