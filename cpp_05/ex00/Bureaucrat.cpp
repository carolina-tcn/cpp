/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:25:59 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/06 18:17:49 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
{
	if (grade > 150)
		GradeTooLowException;
	else if (grade < 1)
		GradeTooHighException;
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if(this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const
{
	return(this->_name);
}

int			Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void		Bureaucrat::incrementGrade()
{
	_grade -= 1;
	if (_grade < 1)
		GradeTooHighException;
}

void		Bureaucrat::decrementGrade()
{
	_grade += 1;
	if (_grade < 1)
		GradeTooLowException;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
}