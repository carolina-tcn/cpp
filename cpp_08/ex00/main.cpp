/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:35:38 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/03 17:18:39 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//vector, deque, list
int main(void)
{
    std::vector<int>    v;
    std::list<int>      l;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    std::vector<int> v2 = v;

    std::cout << *(v.end() - 1) << std::endl;
    std::cout << *(v.begin()) << std::endl;
    std::cout << *(v2.rbegin()) << std::endl;
    std::cout << *(v2.rend() - 1) << std::endl;

    try
    {
        std::vector<int>::const_iterator it = easyfind(v, 30);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        easyfind(v, 45);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::vector<int>::const_iterator it = easyfind(v2, 1);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::list<int>::const_iterator it = easyfind(l, 20);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
