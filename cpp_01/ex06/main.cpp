/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:33:25 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:59 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: ./harlFilter <LEVEL>" << std::endl;
		return (1);
	}

	Harl harl;

	harl.complain(argv[1]);

	return (0);
}
