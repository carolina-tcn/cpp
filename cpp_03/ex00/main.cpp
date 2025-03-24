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

#include "ClapTrap.hpp"
#include <iostream>


int main()
{
    ClapTrap NinjaAssassin;
    ClapTrap FragTrap("FragTrap");
    ClapTrap ClackTrap("ClackTrap");
    //ClapTrap copy_a(a);
    //ClapTrap d = b;
    //c = b;


    NinjaAssassin.attack("FragTrap");
    FragTrap.takeDamage(3);
    FragTrap.beRepaired(4);
    FragTrap.takeDamage(15);
    ClackTrap.attack("NinjaAssassin");
    ClackTrap.takeDamage(10);
    ClackTrap.beRepaired(2);

    return (0);
}
