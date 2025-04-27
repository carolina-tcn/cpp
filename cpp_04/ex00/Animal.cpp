/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:39:45 by carolinatac       #+#    #+#             */
/*   Updated: 2025/04/27 22:23:57 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal created." << std::endl;
}

Animal::Animal(std::string name)
{
	std::cout << "Animal copied." << std::endl;

}

Animal::Animal(const Animal &other)
{
	std::cout << "" << std::endl;

}

Animal& Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "" << std::endl;
	

}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
	
}