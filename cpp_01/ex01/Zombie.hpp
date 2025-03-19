/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:31:54 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:10 by ctacconi         ###   ########.fr       */
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
		Zombie();
		~Zombie();

		void setName(std::string name);
		void announce() const;
};


Zombie* zombieHorde(int N, std::string name);

#endif
