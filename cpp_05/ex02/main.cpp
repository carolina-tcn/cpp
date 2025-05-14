/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:08 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/14 20:31:34 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
    try
    {
        Bureaucrat alice("Alice", 100); // suficiente para firmar y ejecutar
        ShrubberyCreationForm form("home");

        std::cout << "\nIntentando ejecutar sin firmar..." << std::endl;
        try 
		{
            form.execute(alice);
        } 
		catch (std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        std::cout << "\nAlice firma el formulario..." << std::endl;
        form.beSigned(alice);
        std::cout << "Estado del formulario: " << form << std::endl;

        std::cout << "\nAlice ejecuta el formulario..." << std::endl;
        form.execute(alice);

        std::cout << "\nProbando con burócrata de grado bajo (insuficiente para ejecutar)..." << std::endl;
        Bureaucrat bob("Bob", 150); // muy bajo para ejecutar
        try {
            form.execute(bob);
        } catch (std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }
	return (0);
}
