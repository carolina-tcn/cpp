/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:53:32 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/23 19:49:43 by ctacconi         ###   ########.fr       */
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
    if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
        return (true);
    return (false);
}

//long int de 64 bits
//long int strtol (const char* str, char** endptr, int base);
//double strtod (const char* str, char** endptr);
//ERANGE Result too large (POSIX.1, C99).
bool    ScalarConverter::isNumber(const std::string& literal)
{
    int dotCount = 0;
    int start = 0;
    int size = 0;
    bool hasDigit = false;

    if(literal.empty())
        return (false);
    
    std::string toCheck = literal;
    size = toCheck.length();

    if (toCheck[size - 1] == 'f')
    {
        toCheck = toCheck.substr(0, toCheck.length() - 1);
        if (toCheck.empty() || toCheck.find('.') == std::string::npos)
            return (false);
    }
    if(toCheck[0] == '-' || toCheck[0] == '+')
        start = 1;

    size = toCheck.length();
    for(int i = start; i < size; ++i)
    {
        if(!std::isdigit(toCheck[i]) && toCheck[i] != '.')
            return (false);
        if (std::isdigit(toCheck[i]))
            hasDigit = true;
        if(toCheck[i] == '.')
        {
            dotCount++;
            if(dotCount > 1)
                return (false);
        }
    }
    return (hasDigit);
    // value = std::strtod(toCheck.c_str(), &end); // devuelve un const char* estilo C a partir de std::string
    // if (*end != '\0')
    //     return (std::cout << "number: " << ERR_INVALID_INPUT << std::endl, false);
    // if (errno == ERANGE)
    //     return (std::cout << ERR_OVERFLOW_UNDERFLOW << std::endl, false);

    // std::cout << "Number conversion succeed: " << value << std::endl;
    // return (true);   
}

// bool    ScalarConverter::isFloat(const double &value)
// {
//     std::cout << "VALUE: " << value << std::endl;
//     return (true);
// }

void ScalarConverter::convertToChar(const std::string& literal, const ScalarType &inputType)
{
    std::cout << "char: ";
    if (inputType == TYPE_CHAR)
        std::cout << "'" << literal << "'";
    else if (inputType == TYPE_PSEUDO)
        std::cout << "impossible";
    else
    {
        int value = std::atoi(literal.c_str());
        if (value < 0 || value > 127)
            std::cout << "impossible";
        else if (!std::isprint(value))
            std::cout << "Non displayable";
        else
            std::cout << "'" << static_cast<char>(value) << "'";
    }
    std::cout << std::endl;
}

// void    ScalarConverter::convertToInt(const std::string& literal)
// {
    
// }

// void    ScalarConverter::convertToFloat(const std::string& literal)
// {
    
// }

// void    ScalarConverter::convertToDouble(const std::string& literal)
// {
    
//}

ScalarType  ScalarConverter::detectType(const std::string& literal)
{
    std::cout << "The literal is: " << literal << std::endl;

    size_t size_literal = literal.size();
    std::cout << "Length of the string: " << size_literal << std::endl;

    if (handlePseudoLiteral(literal))
        return (TYPE_PSEUDO);
    if (isChar(literal))
        return (TYPE_CHAR);
    if (isNumber(literal))
    {
        if (literal.find('f') != std::string::npos)
        {
            std::cout << "FLOAT" << std::endl;
           return (TYPE_FLOAT);
        }
        if (literal.find('.') != std::string::npos)
          {
            std::cout << "DOUBLE" << std::endl;
          return (TYPE_DOUBLE);
          }
          std::cout <<"INT" << std::endl;
        return (TYPE_INT);
    }
    return (TYPE_INVALID);
}

void    ScalarConverter::convert(const std::string& literal)
{
    ScalarType inputType = detectType(literal);
    if (inputType == TYPE_INVALID)
    {
        std::cout << ERR_INVALID_INPUT << std::endl;
        return ;
    }
    convertToChar(literal, inputType);
    // convertToInt(literal, inputType);
    // convertToFloat(literal, inputType);
    // convertToDouble(literal, inputType);
    std::cout << "OK" << std::endl;
}

