/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:40:52 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/05 19:27:40 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for(int i = 0; i < 4; ++i)
		_slot[i] = NULL;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << CYAN << "Character " << _name << " created." << RESET << std::endl; 
	for(int i = 0; i < 4; ++i)
		_slot[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << CYAN << "Character copy created." << RESET << std::endl;
	for(int i = 0; i < 4; ++i)
		_slot[i] = NULL;
	*this = other;
}

Character&	Character::operator=(const Character &other)
{
	std::cout << CYAN << "Character copy assignment operator called." << RESET << std::endl;
	if(this != &other)
	{
		this->_name = other._name;
		for(int i = 0; i < 4; ++i)
		{
			if(this->_slot[i])
			{
				delete(this->_slot[i]);
				this->_slot[i] = NULL;
			}
		}
		for(int i = 0; i < 4; ++i)
		{
			if(other._slot[i])
				this->_slot[i] = other._slot[i]->clone();
		}
		return(*this);
	}
}

Character::~Character()
{
	std::cout << CYAN << "Character " << _name << " destroyed." << RESET << std::endl; 
	for(int i = 0; i < 4; ++i)
	{
		if(_slot[i])
			delete(_slot[i]);
	}
}


std::string const	&Character::getName() const
{
	return(this->_name);
}

void	Character::equip(AMateria* m)
{
	
}

void	Character::unequip(int idx)
{
	
}

void	Character::use(int idx, ICharacter& target)
{
	
}
