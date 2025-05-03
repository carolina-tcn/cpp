/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:39:45 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/03 17:11:48 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//Constructors
AAnimal::AAnimal() : _type("")
{
	std::cout << RED << "AAnimal created." << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << RED << "AAnimal copy created." << RESET << std::endl;
	*this = other;

}

//Copy assignment operator
AAnimal&	AAnimal::operator=(const AAnimal &other)
{
	std::cout << RED << "Copy assignment operator for AAnimal called." << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal destroyed." << RESET << std::endl;
}

//Getter and Setter
std::string	AAnimal::getType() const
{
	return (_type);
}

void	AAnimal::setType(const std::string& type)
{
	_type = type;	
}
