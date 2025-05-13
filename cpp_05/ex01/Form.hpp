/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:28:13 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/13 20:35:19 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
	
	public:
		Form();
		Form(const Form &other);
		Form(const std::string& name, const int gradeSign, const int gradeExec);
		Form& operator=(const Form& other);
		~Form();

		const std::string&	getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		void				beSigned(Bureaucrat &bureaucrat);
		
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream &out, const Form& form);