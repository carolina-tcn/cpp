/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:36:20 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/30 19:26:29 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>

template <typename T>
T    easyfind(const T& cont, const int num)
{
    //find first occurance of num in cont
    //if no occurance->throw exception or return (error_value)
    
    //for(auto it=cont.begin(); it!= cont.end(); ++it)
    typename T::const_iterator it = std::find(cont.begin(), cont.end(), num);
    if (it != cont.end())
        return ()

            
}
