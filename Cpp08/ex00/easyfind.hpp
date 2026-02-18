/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:21:16 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 14:07:32 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>

class notFound : public std::exception{
    public:
        virtual const char* what() const throw(){
            return ("Number not Found\n");
        }
};

template <typename T>
int easyfind(T arr, int find){
    
    throw notFound();
}