/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:01:20 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 11:09:53 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <climits>
#include <cstring>
#include <cmath>
#include <limits>   
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <iomanip> 
#include <exception>
#include <cerrno>

class ScalarConverter{
    private:
        int			_type;
		int			_int;
		char		_char;
		float		_float;
		double		_double;
        bool        _intImpossible;
        bool       _floatImpossible;
        bool        _doubleImpossible;
		std::string	_input;


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
        void    convertInput();
        
        ScalarConverter();
        ScalarConverter(const std::string input);
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();
        
        public:
           static void convert(const std::string &input);
};