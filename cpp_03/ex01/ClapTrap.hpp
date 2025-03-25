/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:55:49 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/20 18:17:41 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	public:
		ClapTrap(); //constructor por defecto
		ClapTrap(std::string name); //name is passed as param to constructor
		ClapTrap(const ClapTrap &other); //constructor de copia
		ClapTrap& operator=(const ClapTrap &other); //operador de asignacion
		~ClapTrap(); //destructor

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
