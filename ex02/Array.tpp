/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:02:25 by relamine          #+#    #+#             */
/*   Updated: 2025/05/12 06:05:43 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array():a(new T[0]()),_size(0){};

template<typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    this->a = new T[n]();
};

template<typename T>
Array<T>::Array( const Array& array)
{
    _size = array._size;
    this->a = new T[_size]();
    for (unsigned int i = 0; i < _size; i++)
    {
        this->a[i] = array.a[i];
    }
};

template<typename T>
Array<T>& Array<T>::Array::operator=(const Array& array)
{
	if (this != &array)
	{
        _size = array._size;
		delete[] a;
        this->a = new T[_size]();
        for (unsigned int i = 0; i < _size; i++)
        {
            this->a[i] = array.a[i];
        }
	}
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
    delete[] a;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::exception();
    return (a[index]);
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::exception();
    return (a[index]);
}


template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}