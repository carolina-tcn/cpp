/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:56:07 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/27 12:39:18 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Random"), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Default ClapTrap constructor called, default name will be: " <<  _name << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap " << _name << " copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called for ClapTrap " << _name << std::endl;
	if (this != &other) 
	{
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " 
		<< target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " doesn't have enough energy or is dead and can't attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		if (_hit_points <= 0)
		{
			_hit_points = 0;
			std::cout << "ClapTrap " << _name << " takes damage and lose " << _hit_points 
			<< " points of damage!" << std::endl;
			std::cout << "ClapTrap " << _name << " died!!!" << std::endl;	
		}	
		else
		{
			_hit_points -= amount;
			std::cout << "ClapTrap " << _name << " takes damage and lose " << amount  
			<< " points of damage!" << std::endl;
		}
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs itself with " << amount 
		<< " hit points back" << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " hasn't enough points to be repaired" << std::endl;
	}
}
