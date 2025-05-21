/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:53:32 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/21 18:17:06 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

// cadena no es convertible, mientras que stoi genera una excepción.
//atoi: Devuelve 0 en caso de error (cadena no convertible).

//int atoi (const char *str);

//1.detect type of the literal passed
    
//2.convert from string to actual type
    double d = 42.0;
    float f = static_cast<float>(d);
    int i = static_cast<int>(d);
    char c = static_cast<char>(d);

//3.convert explicitly to the 3 other types
//4.display the results

//not a number. infinito positivo/negativo, infinito float
bool    ScalarConverter::handlePseudoLiteral(const std::string& literal)
{
    if (literal == "nan" || literal == "nanf" || literal == "inf" ||
        literal == "+inf" || literal == "-inf" || literal == "inff" ||
        literal == "+inff" || literal == "-inff" )
    {
        std::cout << "impossible" << std::endl;
        return (true);
    }
    return (false);
}

bool    ScalarConverter::isChar(const std::string& literal)
{
   return(literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]));
}

void    ScalarConverter::convert(const std::string& literal)
{
    std::cout << literal << std::endl;

    size_t size_literal = literal.size();
    std::cout << size_literal << std::endl;

    if (handlePseudoLiteral(literal))
        return ;
    else if (!isChar(literal))
        return ;
}

