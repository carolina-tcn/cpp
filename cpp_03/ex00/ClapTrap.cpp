/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:56:07 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 19:12:40 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name(""), hit_points(0), energy_points(0), attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/*ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) 
		//this-> = other.
	return (*this);
}*/

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

