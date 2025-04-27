/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:46:34 by carolinatac       #+#    #+#             */
/*   Updated: 2025/04/27 22:05:58 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Dog : public Animal
{
    protected:
        std::string _type;
    
		public:
        Dog();
        Dog(std::string name); 
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();

		void	makeSound();
};