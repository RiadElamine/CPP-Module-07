/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:11:19 by relamine          #+#    #+#             */
/*   Updated: 2025/07/17 20:42:38 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
class IntClass
{
    
    public:
    T num;
    IntClass(): num(98){}
    operator T() const
    {
        return num;
    }
};

template< typename T >
void _print( T const & x )
{ 
    std::cout << x << std::endl;
}

int main() {

    int tab[] = { 1, 2, 3 };
    IntClass<char> tab2[3];

    iter( tab, 3, _print<int>);
    std::cout << "----------------" << std::endl;
    iter( tab2, 3, _print<IntClass<char> > );
}
