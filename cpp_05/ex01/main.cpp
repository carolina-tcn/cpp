/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:08 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/13 20:35:24 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testConstructors()
{
	Bureaucrat vago;
	std::cout << vago.getName() << std::endl;
	std::cout << vago.getGrade() << std::endl;

	Bureaucrat mari(vago);
	std::cout << mari << std::endl;
	std::cout << vago << std::endl;
}

void	testAssignmentOperator()
{
	Bureaucrat a("A", 10);
	Bureaucrat b("B", 50);

	b = a;
	std::cout << b << std::endl;
}

void	testBeSign()
{
	Bureaucrat caroline("caroline", 137);
	Form hipoteca("hipoteca", 131, 5);
	std::cout << caroline << std::endl;
	std::cout << hipoteca << std::endl;
	
	try
	{
		hipoteca.beSigned(caroline);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << hipoteca << std::endl;
}

void	testSignForm()
{
	Bureaucrat bimba("Bimba", 5);
	Form incripcion42("Piscina42", 70, 50);
	bimba.signForm(incripcion42);
	
	try {
		Bureaucrat pepe("Pepe", 150);
		Form secreto("TopSecret", 100, 80);
		pepe.signForm(secreto);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testTryCatch()
{
	try
	{
		Bureaucrat vago("Vago", 150);
		std::cout << vago << std::endl;
	
		Bureaucrat funcionario("Lola", 151);
		std::cout << funcionario << std::endl;
	
		Bureaucrat jordi("Jordi", -3);
		std::cout << jordi << std::endl;

		vago.decrementGrade();
		std::cout << vago << std::endl;

		Bureaucrat josep("Josep", 1);
		josep.incrementGrade();
		std::cout << josep << std::endl;

		Form multa("Multa trafico", 157, 155);
		std::cout << multa << std::endl;

		Form alquiler("Alquiler piso", 1, 147);
		Form alquiler2(alquiler);
		std::cout << alquiler2 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testPointers()
{
	Form *contrato = new Form("Contrato laboral", 40, 20);
	std::cout << *contrato << std::endl;
		
	Bureaucrat jefa("Jefa", 30);
	jefa.signForm(*contrato);
	std::cout << *contrato << std::endl;
	delete contrato;
}
int	main()
{
	testConstructors();
	testAssignmentOperator();
	testBeSign();
	testSignForm();
	testTryCatch();
	testPointers();

	return (0);
}
