/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:12:48 by ctacconi          #+#    #+#             */
/*   Updated: 2025/02/13 19:42:06 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //to use cout
#include <cctype>
#include <string>
//std es un namespace, que tiene definidos objetos y f(x) como cout, cin, endl, string, vector,,,
//int main()
//{ //insertion operator << to output/print text
//	std::cout << "Hello Carola!" << std::endl; //sin \n
//	return (0);
//}

//si no hay args
//* LOUD AND UNBEARABLE FEEDBACK NOISE *
//si meto frase en min, pasa a MAY


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv; j++)
				argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i];
		}
	}
	else
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
	return(0);
}
