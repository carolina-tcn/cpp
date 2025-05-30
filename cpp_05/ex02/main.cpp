/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:08 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/15 19:23:01 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	try
	{
		ShrubberyCreationForm home("home");
		PresidentialPardonForm minister("minister");
		RobotomyRequestForm robot("robot");
	
		Bureaucrat oktorok("oktorok", 44);
		Bureaucrat mafalda("mafalda", 137);

		std::cout << home << std::endl;
		std::cout << minister << std::endl;
		std::cout << robot << std::endl;

		home.beSigned(oktorok);
		std::cout << home << std::endl;
		home.execute(oktorok);
		home.execute(mafalda);
		
		oktorok.signForm(robot);
		mafalda.signForm(home);
		mafalda.signForm(minister);
		minister.execute(mafalda);
		std::cout << mafalda << std::endl;
		std::cout << minister << std::endl;

		srand(time(NULL));
		robot.beSigned(oktorok);
		robot.execute(oktorok);
		std::cout << robot << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
