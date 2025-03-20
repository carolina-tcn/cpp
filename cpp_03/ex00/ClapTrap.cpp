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

ClapTrap::ClapTrap() : name(""), hit_points(10), energy_points(10), attack_damage(10)
{
	std::cout << "Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) 
	{
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap" << name << "attacks" 
	<< target << ", causing" << "damage" << "points of damage!" << std::endl;
	//target lose attack_damage points
	// -1 energy point
	
	//if (hit_points != 0 && energy_points != 0)
	//	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap" << name << "takes damage and lose" << amount  
	<< "points of damage!" << std::endl;
	//claptrap lose attack_damage points
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap" << name << "repairs itself with" << amount 
	<< "hit points back" << std::endl;
	//claptrap gets amount back to hit_points
	//-1 energy point
	
}

//Getters y setters CONTROL K Y CONTROL C
// int ClapTrap::getHitPoints() const
// {
// 	return  (hit_points);	
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