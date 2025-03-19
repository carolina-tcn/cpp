/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:55:49 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 19:36:00 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		//ClapTrap& operator=(const ClapTrap &other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		//Getters y setters
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackPoints() const;

		void setHitPoints(int const points);
		void setEnergyPoints(int const points);
		void setAttackDamage(int const points);
};

#endif

