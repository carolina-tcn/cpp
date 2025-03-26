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

#include "DiamondTrap.hpp"
#include <iostream>


int main()
{
    std::cout << "\n🔧 Creating DiamondTrap A (default)...\n" << std::endl;
	DiamondTrap a;

	std::cout << "\n💎 Creating DiamondTrap B (named 'Zafiro')...\n" << std::endl;
	DiamondTrap b("Zafiro");

	std::cout << "\n🤖 A attacks TargetX...\n" << std::endl;
	a.attack("TargetX");

	std::cout << "\n🧠 B says whoAmI...\n" << std::endl;
	b.whoAmI();

	std::cout << "\n🌀 Creating DiamondTrap C as copy of B...\n" << std::endl;
	DiamondTrap c(b);

	std::cout << "\n📤 Assigning A = B...\n" << std::endl;
	a = b;

	std::cout << "\n📣 A says whoAmI after assignment...\n" << std::endl;
	a.whoAmI();

	std::cout << "\n🏁 Exiting program, destructors will be called...\n" << std::endl;

    return (0);
}
