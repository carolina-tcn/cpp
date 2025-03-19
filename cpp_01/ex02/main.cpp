/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:32:05 by ctacconi          #+#    #+#             */
/*   Updated: 2025/03/19 13:34:15 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string* stringPTR = &var;
	std::string& stringREF = var;

	std::cout << "The memory address of the string variable: " << &var << std::endl
		<< "The memory address held by stringPTR: " << stringPTR << std::endl
		<< "The memory address held by stringREF: " << &stringREF << "\n" << std::endl;
	
	std::cout << "The value of the string variable: " << var << std::endl
		<< "The value pointed to by stringPTR: " << *stringPTR << std::endl
		<< "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
