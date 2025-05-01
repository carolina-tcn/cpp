/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:39:45 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/01 11:18:14 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal constructor called" << std::endl;

}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;

}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator for Animal called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}

void	Animal::makeSound()
{
	std::cout << "" << std::endl;
}

std::string     Animal::getType() const
{
	return (_type);
}