/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:22:36 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/27 12:39:25 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap ninja_assassin;
    ClapTrap fragtrap("FragTrap");
    ClapTrap clacktrap("ClackTrap");
    ClapTrap copy_ninja_assassin(ninja_assassin);
    clacktrap = fragtrap;

    ninja_assassin.attack("FragTrap");
    fragtrap.takeDamage(3);
    fragtrap.beRepaired(4);
    fragtrap.takeDamage(15);
    clacktrap.attack("NinjaAssassin");
    clacktrap.takeDamage(10);
    clacktrap.beRepaired(2);

    return (0);
}
