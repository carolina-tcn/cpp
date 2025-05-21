/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:52:34 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/21 18:20:28 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <cstdlib> //string to double, int, long, float...
#include <iostream> //input output
#include <cctype> //isalpha
#include <iomanip> //setprecision(numero_de_digitos)

#define ERR_ARGS "ERROR: <./convert> <literal>"  

// A static member function differs from a regular member function in that it can be 
// called without an instance of a class, and since it has no instance, it cannot 
// access non-static members of the class. Static variables are useful when you want 
// to have a function for a class that definitely absolutely does not refer to any 
// instance members, or for managing static member variables

class ScalarConverter
{   
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter& operator=(const ScalarConverter &other);
        ~ScalarConverter();

        static bool handlePseudoLiteral(const std::string& literal);
        static bool isChar(const std::string& literal);

    public:
        static void convert(const std::string& literal);
};
