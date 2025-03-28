/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:55:12 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/27 11:55:13 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(), _name("Default")
{
    std::cout << "Default \033[1;33mDiamondTrap\033[0m constructor called, default name will be: " << YELLOW << _name << RESET << " at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
    std::cout << "\033[1;33mDiamondTrap\033[0m " << YELLOW << _name << RESET << " constructor called at " << this << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    std::cout << "\033[1;33mDiamondTrap\033[0m " << YELLOW << _name << RESET << " copy constructor called at " << this << std::endl;
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Copy assignment operator called for \033[1;33mDiamondTrap\033[0m " << YELLOW << _name << RESET << " at " << this << std::endl;
    if (this != &other)
	{
		ClapTrap::operator=(other);
        ClapTrap::_name = other.ClapTrap::_name;
		_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[1;33mDiamondTrap\033[0m " << YELLOW << _name << RESET << " destructor called at " << this << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "\033[1;33mDiamondTrap\033[0m name: " << YELLOW << _name << RESET << ", \033[1;32mClapTrap\033[0m name: " << GREEN << ClapTrap::_name << RESET << std::endl;
}
