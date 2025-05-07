/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:25:59 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/07 15:08:12 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		GradeTooHighException;
	if (grade > 150)
		GradeTooLowException;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if(this != &other)
	{
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
	if(_grade - 1 < 1)
		GradeTooHighException;
	_grade--;
}

void		Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		GradeTooLowException;
	_grade++;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}