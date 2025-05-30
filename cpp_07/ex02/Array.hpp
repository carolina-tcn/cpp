/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:43:30 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/29 19:54:08 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>

template <typename T>
class   Array
{
    private:
        T*        _array;
        size_t    _n;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        size_t  size() const;

        T&  operator[](size_t idx);
};

#include "Array.tpp"
