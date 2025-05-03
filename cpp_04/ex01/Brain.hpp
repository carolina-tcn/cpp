/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:58:00 by carolinatac       #+#    #+#             */
/*   Updated: 2025/05/03 16:45:39 by carolinatac      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#define PINK "\033[38;5;218m"
#define RESET       "\033[0m"

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();

		std::string	getIdea(int idx) const;
		void		setIdea(int idx, std::string& idea);
};
