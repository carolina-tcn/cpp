/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:23:16 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/03 18:25:10 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int        N;
        std::vector<int>    data;

    public:
        Span(unsigned int N);
        
        void    addNumber(int num);
        int     shortestSpan() const;
        int     longestSpan() const;
};
