/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:30:29 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/17 12:30:29 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <string>

template <typename T> 
class Array{
    private:
        T*              _arr;
        unsigned int    _size;

    public:
        Array() : _arr(NULL), _size(0){
            std::cout << "Default Array Template constructor called" << std::endl;
        }

        Array(unsigned int n) : _arr(new T[n]), _size(n){
            std::cout << "Param Array Template constructor called" << std::endl;
        }

        Array(const Array &obj) : _size(obj._size){
            _arr = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                _arr[i] = obj._arr[i];
            std::cout << "Array Template copy constructor called" << std::endl;
        }

        Array   &operator=(const Array &obj){
            if (this != &obj)
            {
                delete[] _arr;
                _size = obj._size;
                _arr = new T[_size];
                for(unsigned int i = 0; i < _size; i++)
                    _arr[i] = obj._arr[i];
            }
            std::cout << "Array Template assignment operator called" << std::endl;
            return (*this);
        }

        T   &operator[](unsigned int index)
        {
            if (_size == 0)
            {
                throw NullArrSize();
            }
            if (index >= _size)
                throw OutofBounds();
            return (_arr[index]);
        }

        const T   &operator[](unsigned int index) const
        {
            if (_size == 0)
            {
                throw NullArrSize();
            }
            if (index >= _size)
                throw OutofBounds();
            return (_arr[index]);
        }

        ~Array(){
            delete[] _arr;
            std::cout << "Array Template destructor called" << std::endl;
        }

        unsigned int size() const
	    {
	    	return (this->_size);
	    }

        class OutofBounds : public std::exception
        {
            public:
            virtual const char* what() const throw(){
                return("Index is out of range\n");
            }
        };

        class NullArrSize : public std::exception
        {
            public:
            virtual const char* what() const throw(){
                return("The Array is empty\n");
            }
        };
};
