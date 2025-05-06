/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:20:29 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/06 16:24:27 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	std::cout << GREEN << "AMateria created." << RESET << std::endl;	
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << GREEN << "AMateria with type created." << RESET << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << GREEN << "AMateria copy created." << RESET << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	std::cout << GREEN << "AMateria copy assignment operator called." << RESET << std::endl;
	if(this != &other)
		this->_type = other._type;
	return(*this);
}
AMateria::~AMateria()
{
	std::cout << GREEN << "AMateria destroyed." << RESET << std::endl;	
}

std::string const &AMateria::getType() const
{
	return(_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
