/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:53:32 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/20 19:10:58 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//stoi() int stoi (const string&  str, size_t* idx = 0, int base = 10);

// La principal diferencia entre atoi y stoi en C++ radica en cómo manejan los errores 
// cuando la conversión de una cadena a un entero no es posible. atoi devuelve 0 si la 
// cadena no es convertible, mientras que stoi genera una excepción. En resumen: 

//     atoi: Devuelve 0 en caso de error (cadena no convertible).
//     stoi: Lanza una excepción ( std::invalid_argument o std::out_of_range) en caso de error

    void    test_arg(char *argv)
{
    
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string literal)
{
    
}