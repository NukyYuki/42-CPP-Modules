/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:10:50 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 14:45:17 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _array(0 ), _size(0){
    
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

unsigned int        Span::getSize(){
        return(_size);
}

std::vector<int>    Span::getArr(){
    return(_array);
}

void            Span::addNumber(int value){
    if (_array.size() >= _size)
        throw (maxNumberReached());
    _array.push_back(value);
}

void            Span::fillRandNumbers(unsigned int quantity){
    if (_array.size() + quantity > _size)
        throw (maxNumberReached());
    _array.reserve(_array.size() + quantity);
    
    for (unsigned int i = 0; i < quantity; i++)
        _array.push_back(rand());
}

int             Span::shortestSpan(){
    if (_array.size() < 2)
        throw (smallArray());
    
    std::vector<int> copy = _array;
    std::sort(copy.begin(), copy.end());
    int minSpan = copy[1] - copy[0];
    for (size_t i = 0; i < copy.size(); i++)
    {
        int span = copy[i] - copy[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return (minSpan);
}

int             Span::longestSpan(){
    if (_array.size() < 2)
        throw (smallArray());
    
    int max = *std::max_element(_array.begin(), _array.end());
    int min = *std::min_element(_array.begin(), _array.end());
    return (max - min);
}