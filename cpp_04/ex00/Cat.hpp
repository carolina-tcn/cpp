/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:45:17 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/01 20:48:35 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
    protected:
        std::string _type;
    
	public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();

		void	makeSound() const;
        std::string     getType() const;
        void            setType(const std::string& _type);
};