/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:02:27 by relamine          #+#    #+#             */
/*   Updated: 2025/05/12 05:58:50 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

template<typename T>
class Array
{
    private:
        T				*a;
        unsigned int	_size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T>& array);
        Array &operator=(const Array& array);
        ~Array();

		T& operator [](unsigned int index);
        const T& operator [](unsigned int index) const;
        unsigned int size() const;
};
    
#include "Array.tpp"
