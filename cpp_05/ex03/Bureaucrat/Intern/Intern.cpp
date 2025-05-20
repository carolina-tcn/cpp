/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:00:04 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/20 17:28:40 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

Intern::~Intern() {}

AForm*    Intern::makeForm(const std::string& formName, const std::string& target)
{
    int idx = -1;
    std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (int i = 0; i < 3; ++i)
    {
        if(forms[i] == formName)
        {
            idx = i;
            break ;
        }
    }
    switch (idx)
    {
    case 0:
        std::cout << "Intern creates " << formName << "." << std::endl;
        return (new PresidentialPardonForm(target));

    case 1:
        std::cout << "Intern creates " << formName << "." << std::endl;
        return (new RobotomyRequestForm(target));

    case 2:
        std::cout << "Intern creates " << formName << "." << std::endl;
        return (new ShrubberyCreationForm(target));


    default:
        std::cout << "Error: form '" << formName << "' does not exist." << std::endl;
        return (NULL);
    }
}
