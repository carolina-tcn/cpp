/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:15:20 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/05 11:37:55 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	protected:
		std::string	_type;

	public:
		Cure();
		Cure(const Cure &other);
		Cure&	operator=(const Cure &other);
		~Cure();

		std::string	const &getType() const;

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};