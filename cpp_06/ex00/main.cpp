/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:57:39 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/20 19:09:57 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
    
    if (argc != 1)
        return (1);
    test_arg(argv[1]);

    //char
    //int
    //float
    //double

    ScalarConverter::convert("0");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("0");
    ScalarConverter::convert("-4646");
    ScalarConverter::convert("42");
    ScalarConverter::convert("a");
    ScalarConverter::convert("3636.5f");
    ScalarConverter::convert(""); //double

    return (0);
}
