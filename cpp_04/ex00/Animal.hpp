/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:44:30 by carolinatac       #+#    #+#             */
/*   Updated: 2025/04/27 22:17:35 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
    protected:
        std::string _type;
   
    public:
        Animal();
        Animal(std::string name); 
        Animal(const Animal &other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();

    	virtual void	makeSound();
        std::string getType() const;
};
