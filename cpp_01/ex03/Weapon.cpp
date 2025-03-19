/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:32:38 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:36 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : type(type) {}

const std::string&	Weapon::getType() const
{
	return(type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}
