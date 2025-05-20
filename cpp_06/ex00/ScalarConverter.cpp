/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:53:32 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/20 20:28:39 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// cadena no es convertible, mientras que stoi genera una excepción.

//     atoi: Devuelve 0 en caso de error (cadena no convertible).

//int atoi (const char *str);

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string literal)
{
    //1.detect type of the literal passed
    //2.convert from strng to actual type
    //3.convert explicitly to the 3 other types
    //4.display the results
}