/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:43:30 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/28 20:28:11 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>

template <typename T>
class   Array
{
    private:
        T*              _array;
        unsigned int    _n;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        unsigned int  size() const;

        T&  operator[](unsigned int idx);
        const T& operator[](unsigned int idx) const;
};

#include "Array.tpp"
