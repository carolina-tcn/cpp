/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:31:36 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:02 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>


class Zombie
{
	private:
		std::string name;		
			
	public:
		Zombie(std::string name);
		~Zombie();

		void announce();
};


Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
