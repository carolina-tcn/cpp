/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:57:39 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/21 20:29:56 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    test()
{
    ScalarConverter::convert("0");
    ScalarConverter::convert("aaa");
    ScalarConverter::convert("12323423423c");
    ScalarConverter::convert("123234234.45646546");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("0");
    ScalarConverter::convert("-4646");
    ScalarConverter::convert("42");
    ScalarConverter::convert("a");
    ScalarConverter::convert("3636.5f");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("-inff");
    ScalarConverter::convert("2147483647");
    ScalarConverter::convert("2147483648");
    ScalarConverter::convert("2147483650");
    ScalarConverter::convert("-2147483650");
    ScalarConverter::convert(".");
    ScalarConverter::convert("9223372036854775807");
}

int main(int argc, char **argv)
{
    
    if (argc != 2)
        return(std::cerr << ERR_ARGS << std::endl, EXIT_FAILURE);

    ScalarConverter::convert(argv[1]);
    //test();

    return (0);
}
