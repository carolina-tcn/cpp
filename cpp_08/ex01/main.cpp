/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:22:33 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/04 19:38:26 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(4);
        std::cout << "Shortest: "  << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;

        std::vector<int> extra;
        extra.push_back(100);
        extra.push_back(200);
        extra.push_back(300);
    
        Span sp2(10);
        sp2.addNumbers(extra.begin(), extra.end());
        sp2.addNumber(1);
        sp2.addNumber(2);
        std::cout << "Shortest in sp2: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest in sp2:  " << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "ERROR: " << e.what() << '\n';
    }
   
    return (0);
}
