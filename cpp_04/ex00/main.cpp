/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:22:36 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/01 21:02:14 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

int main()
{
   // Animal a;
   // a.makeSound();
   // a.setType("No definido");
    //std::cout << "tipo de a: " << a.getType() << std::endl;

   // Animal b(a);
    //std::cout << "tipo de b: " << b.getType() << std::endl;

    //Animal c;
    //c = a;
   // std::cout << "tipo de c: " << c.getType() << std::endl;
    //c.setType("Otro");
   // std::cout << "tipo de c: " << c.getType() << std::endl;

    Cat cat;
    Cat cat_a(cat);
    cat.makeSound();
    
    //---------------Subject
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    
    return (0);
}
