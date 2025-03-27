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
    ScavTrap Scav;
    ScavTrap NinjaAssassin("NinjaAssassin");
    ScavTrap FragTrap("FragTrap");
    ScavTrap ClackTrap("ClackTrap");
    
    Scav.guardGate();
    Scav.attack("NinjaAssassin");
    NinjaAssassin.attack("Scav");
    NinjaAssassin.guardGate();

    return (0);
}
