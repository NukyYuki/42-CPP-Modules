/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:55:06 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/19 15:46:56 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// For non-const (modifying) functions
template <typename T> 
void iter(T *a, size_t const len, void (*f)(T &)){

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
    for (size_t i = 0; i < len; i++)
        f(a[i]);
    return;
}

// For const (read-only) functions
template <typename T> 
void iter(T const *a, size_t const len, void (*f)(T const &)){

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
    for (size_t i = 0; i < len; i++)
        f(a[i]);
    return;
}