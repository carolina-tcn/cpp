/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:39:45 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/01 11:57:55 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

//Constructors
Animal::Animal()
{
	std::cout << "Animal created." << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy created." << std::endl;
	*this = other;

}

//Copy assignment operator
Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator for Animal called." << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}

//Function
void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

//Getter and Setter
std::string     Animal::getType() const
{
	return (_type);
}

std::string     Animal::setType(onst std::string& type)
{
	_type = type;	
}
