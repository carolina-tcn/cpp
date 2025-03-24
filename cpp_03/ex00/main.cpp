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
    //ClapTrap a;
    ClapTrap b("Juan");
    ClapTrap c("Luis");
    //ClapTrap copy_a(a);
    ClapTrap d = b;
    c = b;


    //a.attack(b);
    //b.takeDamage(3);
    //b.beRepaired(4);

    return (0);
}
