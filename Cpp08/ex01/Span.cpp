/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:10:50 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/19 17:59:45 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _array(NULL){
    
}

Span::Span(unsigned int N) : _size(N){
    _array.reserve(N);
}

Span::Span(const Span& obj)
{
	*this = obj;
}

Span& Span::operator=(const Span& obj){
    if (this != &obj)
    {
        _size = obj._size;
        _array = obj._array;
    }
    return *this;
}

Span::~Span(){
}