/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:28:16 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/07 18:53:02 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _grade_sign(150), _grade_exec(150) {}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), 
	_grade_sign(other._grade_sign), _grade_exec(other._grade_exec) {}

Form& Form::operator= (const Form &other)
{
	if(this != &other)
	{
		_signed = other._signed;
	}
	return (*this);
}

Form::~Form() {}

std::string			Form::getName() const
{
	return(_name);
}

bool				Form::getSigned() const
{
	return(_signed);
}

int					Form::getGradeSign() const
{
	return(_grade_sign);
}

int					Form::getGradeExec() const
{
	return(_grade_exec);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	
}

std::ofstream&	operator<<(std::ofstream &out, const Form& form)
{
	out << form.getName() << ", form grade " << form.getGrade() << ".";
	return (out);
}