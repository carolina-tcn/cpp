/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:22:58 by ctacconi          #+#    #+#             */
/*   Updated: 2025/06/04 19:08:39 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

void    Span::addNumber(int num)
{
    if (data.size() >= N)
        throw std::runtime_error("addNumber Error: Span is full.");
    data.push_back(num);
}

int Span::shortestSpan() const
{
    if (data.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate a span.");
    std::vector<int> sorted = data;
    std::sort(sorted.begin(), sorted.end());
    
    int shortest = sorted[1] - sorted[0];
    for(size_t i = 1; i < sorted.size() - 1; ++i)
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;
    }
    return (shortest);
}

int Span::longestSpan() const
{
    if (data.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate a span.");
    int min = *std::min_element(data.begin(), data.end());
    int max = *std::max_element(data.begin(), data.end());
    
    return (max - min);
}
