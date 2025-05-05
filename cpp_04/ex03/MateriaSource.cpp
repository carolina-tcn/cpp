/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:20:29 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/05 20:37:21 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << MAGENTA << "MateriaSource created." << RESET << std::endl;	
	for(int i = 0; i < 4; ++i)
		_mat[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << MAGENTA << "MateriaSource copy created." << RESET << std::endl;
	for(int i = 0; i < 4; ++i)
		_mat[i] = NULL;
	*this = other;
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << MAGENTA << "MateriaSource copy assignment operator called." << RESET << std::endl;
	if(this != &other)
	{
		for(int i = 0; i < 4; ++i)
		{
			if(this->_mat[i])
				delete(this->_mat[i]);
			if(other._mat[i])
				this->_mat[i] = other._mat[i]->clone();
		}
	}
	return(*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << MAGENTA << "MateriaSource destroyed." << RESET << std::endl; 
	for(int i = 0; i < 4; ++i)
	{
		if(_mat[i])
			delete(_mat[i]);
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if(!m)
		return ;
	for(int i = 0; i < 4; ++i)
	{
		if(!_mat[i])
		{
			_mat[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_mat[i] && _mat[i]->getType() == type)
			return _mat[i]->clone();
	}
	return (NULL);
}
