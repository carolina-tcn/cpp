/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:39:45 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 20:39:17 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors
Animal::Animal() : _type("")
{
	std::cout << RED << "Animal created." << RESET << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << RED << "Animal copy created." << RESET << std::endl;
	*this = other;

}

//Copy assignment operator
Animal&	Animal::operator=(const Animal &other)
{
	std::cout << RED << "Copy assignment operator for Animal called." << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
Animal::~Animal()
{
	std::cout << RED << "Animal destroyed." << RESET << std::endl;
}

//Function
void	Animal::makeSound() const
{
	std::cout << RED << "..." << RESET << std::endl;
}

//Getter and Setter
std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::setType(const std::string& type)
{
	_type = type;	
}
