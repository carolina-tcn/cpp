/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:52:34 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/27 18:05:04 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <climits>
#include <cerrno>
#include <string>

#define ERR_ARGS "ERROR: <./convert> <literal>"
#define ERR_INVALID_INPUT "ERROR: invalid input."
#define ERR_OVERFLOW_UNDERFLOW "ERROR: Overflow or underflow detected for int."
#define ERR_INT_CONVERSION "ERROR: String literal doesn't have valid numbers."

enum ScalarType
{
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_PSEUDO,
    TYPE_INVALID
};

class   ScalarConverter
{   
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter &other);
        ~ScalarConverter();

        static bool handlePseudoLiteral(const std::string &literal);
        static bool isChar(const std::string &literal);
        static bool isNumber(const std::string &literal);
        static bool validInput(const std::string &literal);
        
        static ScalarType   detectType(const std::string &literal);
        static bool         doesOverFlow(const std::string &literal);
        
        static void convertToChar(const std::string &literal, const ScalarType &inputType);
        static void convertToInt(const std::string &literal, const ScalarType &inputType);
        static void convertToFloat(const std::string &literal, const ScalarType &inputType);
        static void convertToDouble(const std::string &literal, const ScalarType &inputType);

    public:
        static void convert(const std::string &literal);
};
