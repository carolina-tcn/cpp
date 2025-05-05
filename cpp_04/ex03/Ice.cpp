/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:15:22 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/05 12:12:33 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << BLUE << "Ice created." << RESET << std::endl;
}

Ice::Ice(const Ice &other)
{
	std::cout << BLUE << "Ice copy created." << RESET << std::endl;
	*this = other;
}

Ice&	Ice::operator=(const Ice &other)
{
	std::cout << BLUE << "Ice copy assignment operator called." << RESET << std::endl;
	if(this != &other)
		this->_type = other._type;
	return(*this);		
}

Ice::~Ice()
{
	std::cout << BLUE << "Ice destroyed." << RESET << std::endl;	
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
