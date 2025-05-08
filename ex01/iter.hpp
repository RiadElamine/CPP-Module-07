/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:11:22 by relamine          #+#    #+#             */
/*   Updated: 2025/05/08 00:58:58 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T1, typename T2>
void iter(T1* array, size_t length, T2 func)
{
    for (size_t i = 0; i < length; i++)
    {
        func(array[i]);
    }
}
