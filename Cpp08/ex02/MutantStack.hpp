/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:54:36 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 16:19:57 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iterator>
#include <iostream>

template <typename T>

class MutantStack : public std::stack<T> {
    public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &obj) : std::stack<T>(obj){};
    MutantStack& operator=(const MutantStack &obj){
        if (this != &obj)
        {
            std::stack<T>::operator=(obj);
        }
        return *this;
    };
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin()
    {
        return this->c.begin();
    };
    iterator end(){
        return this->c.end();
    };
};