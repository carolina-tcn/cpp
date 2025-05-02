/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:48:18 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 19:43:15 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

//Constructors
Dog::Dog() : Animal(), _type("Dog")
{
	std::cout << BLUE << "Dog created." << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << BLUE << "Dog copy created." << RESET << std::endl;
	*this = other;
}

//Copy assignment operator
Dog& Dog::operator=(const Dog &other)
{
	std::cout << BLUE << "Copy assignment operator for Dog called." << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
Dog::~Dog()
{
	std::cout << BLUE << "Dog destroyed." << RESET << std::endl;
}

//Function
void	Dog::makeSound() const
{
	std::cout << BLUE << "WUAUUUUUUU..." << RESET << std::endl;
}

//Getter and Setter
std::string	Dog::getType() const
{
	return (_type);
}

void	Dog::setType(const std::string& type)
{
	_type = type;
}
