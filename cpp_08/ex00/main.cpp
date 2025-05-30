/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:35:38 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/30 20:12:35 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//vector, deque, list
int main(void)
{
    std::vector<int>    v;
    std::deque<int>     d;
    std::list<int>      l;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    easyfind(v, 3);

    return (0);
}