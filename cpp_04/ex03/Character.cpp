/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:40:52 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/07 14:42:27 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	std::cout << CYAN << "Character created." << RESET << std::endl;	
	for(int i = 0; i < 4; ++i)
		_slot[i] = NULL;
	for (int i = 0; i < 100; ++i)
		_floor[i] = NULL;
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << CYAN << "Character " << _name << " created." << RESET << std::endl; 
	for(int i = 0; i < 4; ++i)
		_slot[i] = NULL;
	for (int i = 0; i < 100; ++i)
		_floor[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << CYAN << "Character copy created." << RESET << std::endl;
	for(int i = 0; i < 4; ++i)
		_slot[i] = NULL;
	for (int i = 0; i < 100; ++i)
		_floor[i] = NULL;
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
				delete(this->_slot[i]);
			if(other._slot[i])
				this->_slot[i] = other._slot[i]->clone();
		}
	}
	return(*this);
}

Character::~Character()
{
	std::cout << CYAN << "Character " << _name << " destroyed." << RESET << std::endl; 
	for(int i = 0; i < 4; ++i)
	{
		if(_slot[i])
			delete(_slot[i]);
	}
	for (int i = 0; i < 100; ++i)
{
	if (_floor[i])
		delete (_floor[i]);
}
}

std::string const	&Character::getName() const
{
	return(this->_name);
}

void	Character::equip(AMateria* m)
{
	if(!m)
		return ;
	for(int i = 0; i < 4; ++i)
	{
		if(!this->_slot[i])
		{
			this->_slot[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->_slot[idx])
		return ;
	for (int i = 0; i < 100; i++)
	{
		if (!this->_floor[i])
		{
			this->_floor[i] = this->_slot[idx];
			break ;
		}
	}
	_slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !this->_slot[idx])
		return ;
	_slot[idx]->use(target);
}

