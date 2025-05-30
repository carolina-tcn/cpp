/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:23:07 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/29 20:23:17 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arrOne(5);
        std::cout << arrOne[0] << std::endl;
        std::cout << arrOne[5] << std::endl;

        Array<std::string> arrTwo(3);
        arrTwo[0] = "hola";
        arrTwo[1] = "que";
        arrTwo[2] = "tal";
    
        Array<std::string> arrThree(arrTwo);
        std::cout << arrThree.size() << std::endl;
        std::cout << arrThree[1] << std::endl;

        Array<float> arrF;
        std::cout << arrF[0] << std::endl;

        Array<float> arrFloat(2);
        arrFloat[0] = 2.3;
        arrFloat[1] = 1.1;

        Array<std::string> arrFour(2);
        arrFour[0] = "hey";
        arrFour[1] = "hay";
        arrFour = arrTwo;
        std::cout << arrFour[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
