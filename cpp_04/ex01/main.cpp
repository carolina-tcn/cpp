/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:22:36 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/03 17:04:19 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* animals[6];
    // for (int i = 0; i < 3; ++i)
    //     animals[i] = new Dog();
    // for (int i = 3; i < 6;  ++i)
    //     animals[i] = new Cat ();
    // for (int i = 0; i < 6; ++i)
    //     animals[i]->makeSound();
    // for (int i = 0; i < 6; ++i)
    //     std::cout << animals[i]->getType() << std::endl;
    // for (int i = 0; i < 6; ++i)
    //     delete(animals[i]);

        //---------------Subject
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    return (0);
}
