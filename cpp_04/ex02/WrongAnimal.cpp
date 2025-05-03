/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:16:25 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 20:31:15 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Constructors
WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << MAGENTA << "WrongAnimal created." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << MAGENTA << "WrongAnimal copy created." << RESET << std::endl;
	*this = other;

}

//Copy assignment operator
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << MAGENTA << "Copy assignment operator for WrongAnimal called." << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << MAGENTA << "WrongAnimal destroyed." << RESET << std::endl;
}

//Function
void	WrongAnimal::makeSound() const
{
	std::cout << MAGENTA << "..." << RESET << std::endl;
}

//Getter and Setter
std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::setType(const std::string& type)
{
	_type = type;	
}
