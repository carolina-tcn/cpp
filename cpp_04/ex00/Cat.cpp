/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:47:53 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 20:09:45 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

//Constructors
Cat::Cat()
{
	std::cout << YELLOW << "🐱Cat created." << RESET << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << YELLOW << "Cat copy created." << RESET << std::endl;
	*this = other;

}

//Copy assignment operator
Cat& Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "Copy assignment operator for Cat called." << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
Cat::~Cat()
{
	std::cout << YELLOW << "Cat destroyed." << RESET << std::endl;
}

//Function
void	Cat::makeSound() const
{
	std::cout << YELLOW << "MIAUUUUUUU...." << RESET << std::endl;
}
