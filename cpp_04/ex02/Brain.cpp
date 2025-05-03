/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:58:03 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/03 16:45:37 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Constructors
Brain::Brain()
{
	std::cout << PINK << "🧠Brain created." << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << PINK << "Brain copy created." << RESET << std::endl;
	*this = other;
}

//Copy assignment operator
Brain& Brain::operator=(const Brain& other)
{
	std::cout << PINK << "Copy assignment operator for Brain called." << RESET << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

//Destructor
Brain::~Brain()
{
	std::cout << PINK << "Brain destroyed." << RESET << std::endl;
}

std::string	Brain::getIdea(int idx) const
{
	if(idx < 0 || idx > 100)
		return ("invalid idx");
	return (ideas[idx]);
}

void	Brain::setIdea(int idx, std::string& idea)
{
	if (idx >= 0 && idx < 100)
		ideas[idx] = idea;
}
