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
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();

        
        
    public:
        static void	convert(std::string literal);
};