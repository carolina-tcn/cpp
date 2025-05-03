/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:46:34 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/03 17:12:48 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog &other);
        Dog& operator=(const Dog &other);
        ~Dog();

        void    makeSound() const;
};
