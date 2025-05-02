/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:16:54 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/02 20:29:52 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

class WrongAnimal
{
    protected:
        std::string _type;
   
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        WrongAnimal& operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();

    	void	makeSound() const;
        std::string     getType() const;
        void            setType(const std::string& _type);
};
