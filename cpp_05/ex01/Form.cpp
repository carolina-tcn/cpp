/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:28:16 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/13 20:35:14 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _grade_sign(150), _grade_exec(150) {}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), 
	_grade_sign(other._grade_sign), _grade_exec(other._grade_exec) {}

Form::Form(const std::string& name, const int gradeSign, const int gradeExec) : 
	_name(name), _signed(false), _grade_sign(gradeSign), _grade_exec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException(); 
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}
	
Form& Form::operator=(const Form &other)
{
	if(this != &other)
	{
		_signed = other._signed;
	}
	return (*this);
}

Form::~Form() {}

const std::string&	Form::getName() const
{
	return(_name);
}

bool	Form::getSigned() const
{
	return(_signed);
}

int	Form::getGradeSign() const
{
	return(_grade_sign);
}

int	Form::getGradeExec() const
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
	if(bureaucrat.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_signed = true;
}

std::ostream&	operator<<(std::ostream &out, const Form& form)
{
	out << form.getName() << ", form Sign Grade: " << form.getGradeSign()
	<< ", form Execute Grade: " << form.getGradeExec() << ", Signed: ";
	if(form.getSigned() == true)
		out << "yes" << ".";
	else
		out << "no" << ".";
	return (out);
}