/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:32:42 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:38 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>


class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		const std::string&	getType() const;
		void	setType(std::string newType);
};

# endif
