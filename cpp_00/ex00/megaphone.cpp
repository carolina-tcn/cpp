/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:34:29 by ctacconi          #+#    #+#             */
/*   Updated: 2025/02/27 11:10:47 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc > 1 && argv[1][0] != '\0')
	{
		for (int i = 1; i < argc; ++i)
		{
			for (int j = 0; argv[i][j] != '\0'; ++j)
				argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i] << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}
