/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:48:18 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/03 16:54:50 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

//Constructors
Dog::Dog()
{
	std::cout << BLUE << "🐶Dog created." << RESET << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << BLUE << "Dog copy created." << RESET << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain);
}

//Copy assignment operator
Dog& Dog::operator=(const Dog &other)
{
	std::cout << BLUE << "Copy assignment operator for Dog called." << RESET << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		if (_brain)
			delete(_brain);
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

//Destructor
Dog::~Dog()
{
	std::cout << BLUE << "Dog destroyed." << RESET << std::endl;
	delete(_brain);
}

//Function
void	Dog::makeSound() const
{
	std::cout << BLUE << "WUAUUUUUUU..." << RESET << std::endl;
}

