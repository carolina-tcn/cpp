/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:08 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/13 20:34:57 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class exception {
	public:
	  exception () throw();
	  exception (const exception&) throw();
	  exception& operator= (const exception&) throw();
	  virtual ~exception() throw();
	  virtual const char* what() const throw();
	  //método que devuelve un mensaje explicando el error
	};

int	main()
{
	// try
	// {
	// 	Bureaucrat funcionario("Vago", 150);
	// 	std::cout << funcionario << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat funcionario("Vago", 151);
	// 	std::cout << funcionario << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat funcionario("Vago", -3);
	// 	std::cout << funcionario << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat funcionario("Vago", 150);
	// 	funcionario.decrementGrade();
	// 	std::cout << funcionario << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	try
	{
		Bureaucrat funcionario("Vago", 1);
		funcionario.incrementGrade();
		std::cout << funcionario << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
