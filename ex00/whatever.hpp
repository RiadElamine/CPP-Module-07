/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:21:40 by relamine          #+#    #+#             */
/*   Updated: 2025/06/30 21:27:06 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename t>
void swap(t &a, t &b)
{
    t tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename t>
t min(const t &NumOne, const t &NumSecond)
{
    return (NumOne < NumSecond ? NumOne : NumSecond);
}

template <typename t>
t max(const t &NumOne, const t &NumSecond)
{
    return (NumOne > NumSecond ? NumOne : NumSecond);
}

