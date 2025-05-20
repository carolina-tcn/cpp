/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:28:16 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/13 20:35:14 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name(""), _signed(false), _grade_sign(150), _grade_exec(150) {}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), 
	_grade_sign(other._grade_sign), _grade_exec(other._grade_exec) {}

AForm::AForm(const std::string& name, const int gradeSign, const int gradeExec) : 
	_name(name), _signed(false), _grade_sign(gradeSign), _grade_exec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException(); 
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}
	
AForm& AForm::operator=(const AForm &other)
{
	if(this != &other)
	{
		_signed = other._signed;
	}
	return (*this);
}

AForm::~AForm() {}

const std::string&	AForm::getName() const
{
	return(_name);
}

bool	AForm::getSigned() const
{
	return(_signed);
}

int	AForm::getGradeSign() const
{
	return(_grade_sign);
}

int	AForm::getGradeExec() const
{
	return(_grade_exec);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_signed = true;
}

std::ostream&	operator<<(std::ostream &out, const AForm& form)
{
	out << form.getName() << ", Sign Grade: " << form.getGradeSign()
	<< ", Execute Grade: " << form.getGradeExec() << ", Signed: ";
	if(form.getSigned() == true)
		out << "yes" << ".";
	else
		out << "no" << ".";
	return (out);
}
