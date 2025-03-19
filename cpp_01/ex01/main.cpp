/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:31:44 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:05 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"


int main()
{
	int N = 5;
	Zombie *horde;

	horde = zombieHorde(N, "zombie");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
