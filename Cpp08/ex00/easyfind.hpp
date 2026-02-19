/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:21:16 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/19 12:06:16 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class notFound : public std::exception{
    public:
        virtual const char* what() const throw(){
            return ("Number not Found\n");
        }
};

template <typename T>
typename T::iterator easyfind(T &arr, int find){
    typename T::iterator found = std::find(arr.begin(), arr.end(), find);
    if (found == arr.end())
        throw notFound();
    return found;
}