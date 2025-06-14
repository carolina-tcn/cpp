/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:36:20 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/03 16:43:13 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::const_iterator    easyfind(const T& cont, int num)
{
    typename T::const_iterator it = std::find(cont.begin(), cont.end(), num);
    if (it == cont.end())
        throw std::runtime_error("Value not found.");
    return (it);
}
