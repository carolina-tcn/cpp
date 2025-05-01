/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:44:30 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/01 20:42:29 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

class Animal
{
    protected:
        std::string _type;
   
    public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();

    	virtual void	makeSound() const;
        std::string     getType() const;
        void            setType(const std::string& _type);
};
