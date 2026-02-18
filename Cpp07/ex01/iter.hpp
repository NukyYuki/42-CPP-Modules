/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:55:06 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 13:29:32 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename N> 
void iter(T *a, int const len, void (*f)(N &)){

   if (!a)
    {
        std::cout << "Error: invalid array pointer" << std::endl;
        return ;
    }
    if (!f)
    {
        std::cout << "Error: Invalid function pointer" << std::endl;
        return ;
    }
    if (len < 1)
    {
        std::cout << "Error: Invalid array size" << std::endl;
        return ;
    }
    for (int i = 0; i < len; i++)
        f(a[i]);
    return;
}