/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:23:16 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/04 19:34:12 by ctacconi         ###   ########.fr       */
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

        template <typename Iterator>
        void    addNumbers(Iterator begin, Iterator end);
};

template <typename Iterator>
void    Span::addNumbers(Iterator begin, Iterator end)
{
    if (static_cast<unsigned int>(std::distance(begin, end) + data.size()) > N)
        throw std::runtime_error("addNumber Error: Span is full.");
    data.insert(data.end(), begin, end);
}
