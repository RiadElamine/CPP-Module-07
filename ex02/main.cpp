/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:02:31 by relamine          #+#    #+#             */
/*   Updated: 2025/05/12 06:06:03 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> array(9);
    for (unsigned int i = 0; i < array.size(); i++)
    {
        array[i] = i;
    }

    Array<int> copy_array(array);
    for (unsigned int i = 0; i < copy_array.size(); i++)
    {
        std::cout << "Origine "<< array[i] << " == " 
        << "Copy " << copy_array[i] << std::endl;
    }

    try
    {
        array[array.size()];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}