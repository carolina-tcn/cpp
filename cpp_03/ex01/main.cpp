/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:22:36 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/27 12:47:17 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ScavTrap scav;
    ScavTrap ninja_assassin("NinjaAssassin");
    ScavTrap fragtrap("FragTrap");
    ScavTrap clacktrap("ClackTrap");
    
    scav.guardGate();
    scav.attack("NinjaAssassin");
    ninja_assassin.attack("Scav");
    ninja_assassin.guardGate();

    return (0);
}
