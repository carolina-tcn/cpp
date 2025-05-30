/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:35:38 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/30 19:25:37 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//vector, deque, list
int main(void)
{
    std::vector<int>    vector;
    std::deque<int>     deque;
    std::list<int>      list;

    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);

    easyfind(vector, 3);
    
    return (0);
}
