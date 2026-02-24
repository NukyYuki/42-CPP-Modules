/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:10:57 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 14:06:14 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <exception>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

class Span{
    private:
        std::vector<int>    _array;
        unsigned int        _size;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();

        int             shortestSpan();
        int             longestSpan();
        void            addNumber(int value);
        void            fillRandNumbers(unsigned int quantity);
        
        unsigned int        getSize();
        std::vector<int>    getArr();
        class maxNumberReached : public std::exception{
            virtual const char* what() const throw(){
                return ("Unable to add any more elements, maximum size reached");
            }
        };
        class smallArray : public std::exception{
            virtual const char* what() const throw(){
                return ("Array too small to return a span");
            }
        };
};