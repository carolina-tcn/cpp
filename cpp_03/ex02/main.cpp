/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:22:36 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 19:24:02 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>


int main()
{
    std::cout << "\n🛠️  Creating FragTrap A...\n" << std::endl;
    FragTrap A("Alpha");

    std::cout << "\n🤝 Calling highFivesGuys() on A...\n" << std::endl;
    A.highFivesGuys();

    std::cout << "\n🛠️  Creating FragTrap B using copy constructor from A...\n" << std::endl;
    FragTrap B(A);

    std::cout << "\n🎯 A attacks target 'BetaBot'\n" << std::endl;
    A.attack("BetaBot");

    std::cout << "\n🛠️  Creating FragTrap C with name 'Charlie'...\n" << std::endl;
    FragTrap C("Charlie");

    std::cout << "\n🔁 Assigning C = A using operator=...\n" << std::endl;
    C = A;

    std::cout << "\n💥 Exiting main, destructors will now be called...\n" << std::endl;

    return (0);
}
