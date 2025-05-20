/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:08 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/20 17:29:57 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    if (rrf)
    {
        std::cout << "Successfully created form: " << rrf->getName() << std::endl;
        delete rrf;
    }

	Intern intern;
	AForm* f1 = intern.makeForm("robotomy request", "Bender");
	AForm* f2 = intern.makeForm("magic unicorn", "Nowhere");

	if (f1)
    {
        std::cout << "Successfully created form: " << f1->getName() << std::endl;
        delete f1;
    }

    if (!f2)
    {
        std::cout << "Failed to create unknown form." << std::endl;
    }

	return (0);
}
