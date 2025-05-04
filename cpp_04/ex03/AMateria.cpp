/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:20:29 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/04 13:59:50 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	std::cout << MAGENTA << "AMateria created." << RESET << std::endl;	
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << MAGENTA << "AMateria with type created." << RESET << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << MAGENTA << "AMateria copy created." << RESET << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	std::cout << MAGENTA << "AMateria copy assignment operator called." << RESET << std::endl;
	if(this != &other)
		this->_type = other._type;
	return(*this);
	
}
AMateria::~AMateria()
{
	std::cout << MAGENTA << "AMateria destroyed." << RESET << std::endl;	
}

std::string const &AMateria::getType() const
{
	return(_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}