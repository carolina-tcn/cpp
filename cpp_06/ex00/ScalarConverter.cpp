/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:53:32 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/21 20:36:11 by ctacconi         ###   ########.fr       */
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
        std::cout << "impossible bla bla bla" << std::endl;
        return (true);
    }
    return (false);
}

bool    ScalarConverter::isChar(const std::string& literal)
{
    //return(literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]));
    if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
    {
        std::cout << "The string is a char: " << literal << std::endl;
        return (true);
    }
    else
    {
        std::cout << "The string is not a char." << std::endl;
        return (false);
    }
}

//long int de 64 bits
//long int strtol (const char* str, char** endptr, int base);
//double strtod (const char* str, char** endptr);
//ERANGE Result too large (POSIX.1, C99).
bool    ScalarConverter::isNumber(const std::string& literal)
{
    char *end = NULL;
    double d;

    d = std::strtod(literal.c_str(), &end); // devuelve un const char* estilo C a partir de std::string
    if (*end != '\0')
        return (std::cout << "String literal doesn't have valid numbers." << std::endl, false);
    if (errno == ERANGE || d > INT_MAX || d < INT_MIN)
        return (std::cout << ERR_OVERFLOW_UNDERFLOW << std::endl, false);
    
    std::cout << "Int conversion succeed: " << d << std::endl;
    return (true);   
}

void    ScalarConverter::convert(const std::string& literal)
{
    std::cout << "The literal is: " << literal << std::endl;

    size_t size_literal = literal.size();
    std::cout << "Length of the string: " << size_literal << std::endl;

    if (handlePseudoLiteral(literal))
        return ;
    else if (isChar(literal))
        return ;
    else if (isNumber(literal))
        return ;
}

