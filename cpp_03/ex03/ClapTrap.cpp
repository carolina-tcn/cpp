/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:56:07 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/20 18:19:26 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Default_clap_name"), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Default \033[1;32mClapTrap\033[0m constructor called, default name will be: "  << GREEN << _name << RESET << " at " << this << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET " constructor called at " << this << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " copy constructor called at " << this << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called for \033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " at " << this << std::endl;
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
	std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " destructor called at " << this  << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " attacks " 
		<< target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " doesn't have enough energy or is dead and can't attack." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		if (_hit_points <= 0)
		{
			_hit_points = 0;
			std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " takes damage and lose " << _hit_points 
			<< " points of damage!" << std::endl;
			std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " died!!!" << std::endl;	
		}	
		else
		{
			_hit_points -= amount;
			std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " takes damage and lose " << amount  
			<< " points of damage!" << std::endl;
		}
	}
	else
	{
		std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " is already dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " repairs itself with " << amount 
		<< " hit points back" << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else
	{
		std::cout << "\033[1;32mClapTrap\033[0m " << GREEN << _name << RESET << " hasn't enough points to be repaired" << std::endl;
	}
}
