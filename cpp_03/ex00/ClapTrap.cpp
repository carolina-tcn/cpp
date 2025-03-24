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

ClapTrap::ClapTrap() : _name("Random"), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Default ClapTrap constructor called, default name will be: " <<  _name << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 10;
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
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
	if (_energy_points > 0 || _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " 
		<< target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		std::cout << "ClapTrap" << _name << "hasn't enought points to attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " takes damage and lose " << amount  
		<< " points of damage!" << std::endl;
		_hit_points -= amount;
		if (_hit_points <= 0)
			std::cout << "ClapTrap " << _name << " died!!!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap" << _name << "is already dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 || _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs itself with " << amount 
		<< " hit points back" << std::endl;
		_hit_points += amount;
		_energy_points--;
	}
	else
	{
		std::cout << "ClapTrap" << _name << "hasn't enought points to be repaired" << std::endl;
	}
}

//Getters y setters CONTROL K Y CONTROL C, comand u
// int ClapTrap::getHitPoints() const
// {
//  	return  (hit_points);	
// }

// int ClapTrap::getEnergyPoints() const
// {
// 	return (energy_points);
// }

// int ClapTrap::getAttackPoints() const
// {
// 	return (attack_damage);
// }

// void ClapTrap::setHitPoints(int const points)
// {
// 	this->hit_points = points;
// }

// void ClapTrap::setEnergyPoints(int const points)
// {
// 	this->energy_points = points;
// }

// void ClapTrap::setAttackDamage(int const points)
// {
// 	this->attack_damage = points;
// }
