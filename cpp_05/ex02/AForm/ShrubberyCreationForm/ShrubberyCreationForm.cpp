/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 20:57:50 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/14 21:52:49 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <cstdlib>

ShrubberyCreationForm::ShrubberyCreationForm() : _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : 
    AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
    AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if(this->getSigned() == false)
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeExec())
        throw GradeTooLowException();
    
    std::ofstream target_file((_target + "_shrubbery").c_str());
        
    if (!target_file.is_open())
    {
        std::cerr << "Error: Could not create the file." << _target + "_shrubbery" << std::endl;
        return ;
    }
    target_file << "     ###          ###          ###     " << std::endl;
    target_file << "    #o###        #o###        #o###    " << std::endl;
    target_file << "  #####o###    #####o###    #####o###  " << std::endl;
    target_file << " #o#\\#|#/###  #o#\\#|#/###  #o#\\#|#/### " << std::endl;
    target_file << "  ###\\|/#o#    ###\\|/#o#    ###\\|/#o#  " << std::endl;
    target_file << "   # }|{ #      # }|{ #      # }|{ #   " << std::endl;
    target_file << "     }|{          }|{          }|{     " << std::endl;
    target_file << "     }|{          }|{          }|{     " << std::endl;
    target_file.close();
}
