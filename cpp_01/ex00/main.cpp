/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:30:50 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:33:51 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"


int main()
{
	Zombie *zombie_ptr = newZombie("Zombie_heap");
	zombie_ptr->announce();

	randomChump("Zombie_stack");

	delete zombie_ptr;
	return (0);
}
