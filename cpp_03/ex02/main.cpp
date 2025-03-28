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
    FragTrap a("Alpha");

    std::cout << "\n🤝 Calling highFivesGuys() on A...\n" << std::endl;
    a.highFivesGuys();

    std::cout << "\n🛠️  Creating FragTrap B using copy constructor from A...\n" << std::endl;
    FragTrap b(a);

    std::cout << "\n🎯 A attacks target 'BetaBot'\n" << std::endl;
    a.attack("BetaBot");

    std::cout << "\n🛠️  Creating FragTrap C with name 'Charlie'...\n" << std::endl;
    FragTrap c("Charlie");

    std::cout << "\n🔁 Assigning C = A using operator=...\n" << std::endl;
    c = a;

    std::cout << "\n💥 Exiting main, destructors will now be called...\n" << std::endl;

    return (0);
}
