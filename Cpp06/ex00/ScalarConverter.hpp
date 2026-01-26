/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:01:20 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/23 16:06:51 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <climits>
#include <cstring>
#include <cmath>
#include <limits>   // std::numeric_limits<T>::min/max
#include <cmath>    // std::isnan, std::isinf
#include <cstdlib>  // std::strtod
#include <cctype>   // std::isprint
#include <iomanip> 
#include <exception> // Not necessary but good pratice

class ScalarConverter{
    private:
        int			_type;
		int			_int;
		char		_char;
		float		_float;
		double		_double;
		std::string	_string;

        ScalarConverter();
        ScalarConverter(const std::string input);
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();

        int         getType()const;
        int         getInt()const;
        char		getChar()const;
        float		getFloat()const;
        double		getDouble()const;
        std::string getInput()const;

        void    isChar();
        void    isInt();
        void    isFloat();
        void    isDouble();

        int     checkInput();
        void    printInput();
        
        
    public:
        static void	convert(std::string literal);
};