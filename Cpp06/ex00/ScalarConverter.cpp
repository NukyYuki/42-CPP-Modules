/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:01:17 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/23 16:01:18 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "Default Constructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(const std::string input) : _string(input){
    std::cout << "Paramatized Constructor Called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) : _string(obj.getInput()){
    std::cout << "Copy Constructor Called" << std::endl;
    type = obj.type;
	_char = obj._char;
	_int = obj._int;
	_float = obj._float;
	_double = obj._double;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "Default Destructor Called" << std::endl;
}

int ScalarConverter::getInt() const{
    return (_int);
}

char		ScalarConverter::getChar()const{
    return (_char);
}

float		ScalarConverter::getFloat()const{
    return (_float);
}

double		ScalarConverter::getDouble()const{
    return (_double);
}

std::string ScalarConverter::getInput()const{
    return (_string);
}