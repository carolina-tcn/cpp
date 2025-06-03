/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:23:16 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/03 17:33:50 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

class Span
{
    private:
        unsigned int N;

    public:
        Span(unsigned int N);
        
        void    addNumber(int num);
        void    shortestSpan();
        void    longestSpan();
};