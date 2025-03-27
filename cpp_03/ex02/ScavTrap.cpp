/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:55:02 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/27 11:55:03 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
 
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default \033[1;34mScavTrap\033[0m constructor called, default name will be: " << BLUE << _name << RESET << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
  	std::cout << "Copy assignment operator called for \033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << std::endl;
	if (this != &other) 
		ClapTrap::operator=(other);
	return (*this);  
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[1;34mScavTrap\033[0m " << BLUE << _name << RESET << " destructor called" << std::endl;
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
