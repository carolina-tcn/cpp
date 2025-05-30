/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:03:22 by ctacconi          #+#    #+#             */
/*   Updated: 2025/05/29 19:53:54 by ctacconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array() : _array(NULL), _n(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _n(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other) : _array(new T[other._n]), _n(other._n)
{
    for(size_t i = 0; i < _n; ++i)
        _array[i] = other._array[i];
}

template <typename T>
Array<T>&  Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete[] _array;
        _n = other._n;
        _array = new T[_n];
        for(size_t i = 0; i < _n; ++i)
            _array[i] = other._array[i];
    }
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
size_t  Array<T>::size() const
{
    return (_n);
}

template <typename T>
T&  Array<T>::operator[](size_t idx)
{
    if (idx >= _n)
        throw std::out_of_range("Index out of bounds.");
    return (_array[idx]);
}

