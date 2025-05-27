/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:11:56 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/27 18:09:09 by ctacconi         ###   ########.fr       */
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

bool    ScalarConverter::handlePseudoLiteral(const std::string& literal)
{
    if (literal == "nan" || literal == "nanf" || literal == "inf" ||
        literal == "+inf" || literal == "-inf" || literal == "inff" ||
        literal == "+inff" || literal == "-inff" )
        return (true);
    return (false);
}

bool    ScalarConverter::isChar(const std::string& literal)
{
    if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
        return (true);
    return (false);
}

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
}

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

bool    ScalarConverter::doesOverFlow(const std::string& literal)
{
    if (literal.length() > 11)
        return (true);
    long num = std::atol(literal.c_str());
    if (num < INT_MIN || num > INT_MAX)
        return (true);
    return (false);
}

void    ScalarConverter::convertToInt(const std::string &literal, const ScalarType &inputType)
{
    std::cout << "int: ";
    if (inputType == TYPE_PSEUDO || doesOverFlow(literal))
        std::cout << "impossible";
    else if (inputType == TYPE_CHAR)
        std::cout << static_cast<int>(literal[0]);
    else
        std::cout << std::atoi(literal.c_str());
    std::cout << std::endl;
}

void    ScalarConverter::convertToFloat(const std::string& literal, const ScalarType &inputType)
{
    std::cout.precision(1);
	std::cout.setf(std::ios::fixed);
	std::cout << "float: ";
	if (inputType == TYPE_CHAR)
		std::cout << static_cast<float>(literal[0]);
	else
		std::cout << static_cast<float>(std::atof(literal.c_str()));
	std::cout << "f" << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void    ScalarConverter::convertToDouble(const std::string& literal, const ScalarType &inputType)
{
    std::cout.precision(1);
	std::cout.setf(std::ios::fixed);
	std::cout << "double: ";
	if (inputType == TYPE_CHAR)
		std::cout << static_cast<double>(literal[0]);
	else
		std::cout << static_cast<double>(std::atof(literal.c_str()));
	std::cout << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

ScalarType  ScalarConverter::detectType(const std::string& literal)
{
    if (handlePseudoLiteral(literal))
        return (TYPE_PSEUDO);
    if (isChar(literal))
        return (TYPE_CHAR);
    if (isNumber(literal))
    {
        if (literal.find('f') != std::string::npos)
            return (TYPE_FLOAT);
        if (literal.find('.') != std::string::npos)
            return (TYPE_DOUBLE);
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
    convertToInt(literal, inputType);
    convertToFloat(literal, inputType);
    convertToDouble(literal, inputType);
}

