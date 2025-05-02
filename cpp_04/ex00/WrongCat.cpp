/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:16:57 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 20:42:33 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

//Constructors
WrongCat::WrongCat()
{
	std::cout << CYAN << "🐱WrongCat created." << RESET << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << CYAN << "WrongCat copy created." << RESET << std::endl;
	*this = other;

}

//Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << CYAN << "Copy assignment operator for WrongCat called." << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

//Destructor
WrongCat::~WrongCat()
{
	std::cout << CYAN << "WrongCat destroyed." << RESET << std::endl;
}

//Function
void	WrongCat::makeSound() const
{
	std::cout << CYAN << "MIAUUUUUUU...." << RESET << std::endl;
}
