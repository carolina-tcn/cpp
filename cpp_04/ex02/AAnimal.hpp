/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:44:30 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 19:52:23 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

class AAnimal
{
    protected:
        std::string _type;
   
    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal& operator=(const AAnimal &other);
        virtual ~AAnimal();

    	virtual void	makeSound() const = 0;
        std::string     getType() const;
        void            setType(const std::string& _type);
};
