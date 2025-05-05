/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:15:17 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/05 11:50:42 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << YELLOW << "Cure created." << RESET << std::endl;
}

Cure::Cure(const Cure &other)
{
	std::cout << YELLOW << "Cure copy created." << RESET << std::endl;
	*this = other;
}

Cure&	Cure::operator=(const Cure &other)
{
	std::cout << YELLOW << "Cure copy assignment operator called." << RESET << std::endl;
	if(this != &other)
		this->_type = other._type;
	return(*this);		
}

Cure::~Cure()
{
	std::cout << YELLOW << "Cure destroyed." << RESET << std::endl;	
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << YELLOW << "* heals " << target.getName() << "'s wounds *"<< RESET << std::endl;
}