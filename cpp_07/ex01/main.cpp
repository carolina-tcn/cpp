/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:46:59 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/30 17:57:24 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void    printElement(const T& element)
{
    std::cout << element << " ";
}

int main()
{
    std::string str[] = {"hola", "carol", "que", "tal"};
    int arr[] = {1, 2, 3, 4, 5};
    char c[] = {'a', 'b', 'c', 'd', 'e'};
    float f[] = {1.1f, 2.3f, 5.0f};

    std::cout << "str: ";
    iter(str, 4, printElement<std::string>);
    std::cout << std::endl;

    std::cout << "arr: ";
    iter(arr, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "c: ";
    iter(c, 5, printElement<char>);
    std::cout << std::endl;

    std::cout << "f: ";
    iter(f, 3, printElement<float>);
    std::cout << std::endl;

    return (0);   
}
