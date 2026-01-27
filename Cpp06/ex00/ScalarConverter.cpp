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

ScalarConverter::ScalarConverter(const std::string input) : _input(input){
    std::cout << "Paramatized Constructor Called" << std::endl;
    _type = checkInput();
    convertInput();
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) : _input(obj.getInput()){
    std::cout << "Copy Constructor Called" << std::endl;
    _type = obj._type;
	_char = obj._char;
	_int = obj._int;
	_float = obj._float;
	_double = obj._double;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "Default Destructor Called" << std::endl;
}

int ScalarConverter::getType() const{
    return (_type);
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
    return (_input);
}

static bool checkInt(const std::string input)
{
	if (input.empty())
		return false;
	size_t i = 0;

	if (input[i] == '+' || input[i] == '-')
		i++;
	if (i == input.size())
		return false;
	for (; i < input.size(); i++)
	{
		if (std::isdigit(static_cast<unsigned char>(input[i])) == 0)
			return false;
	}
	return true;
}

int     ScalarConverter::checkInput(){
	const std::string& inputCase = this->getInput(); 

	if (inputCase == "nan" || inputCase == "-inff" ||
		inputCase == "+inff" || inputCase == "-inf" ||
		inputCase == "+inf" || inputCase == "nanf")
		return -1;
	if (inputCase.size() == 1 && std::isprint(static_cast<unsigned char>(inputCase[0])) &&
		std::isdigit(static_cast<unsigned char>(inputCase[0])) == 0)
		return 1; // Input is a char
	if (checkInt(inputCase) == true)
		return (2); // Input is a strict int
	if (inputCase.find('.') != std::string::npos)
	{
		size_t f_pos = inputCase.find('f');
		if (f_pos != std::string::npos && f_pos == inputCase.size() - 1)
			return 4; // Input is a float
		else if (f_pos == std::string::npos)
			return 3; // Input is a double
	}
}

void	ScalarConverter::convertInput(){
	switch (_type)
	{
		case -1:
			isDouble();
			break;
		case 1:
			isChar();
			break;
		case 2:
			isInt();
			break;
		case 3:
			isDouble();
			break;
		case 4:
			isFloat();
			break;
		default:
			std::cout << "Error: Unknown type" << std::endl;
	}
}

void	ScalarConverter::isChar(){
	_char = _input[0];
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
	printInput(); 
}

void	ScalarConverter::isInt(){
	_int = std::atoi(_input.c_str());
	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
	printInput();
}

void	ScalarConverter::isFloat(){
	char *end = NULL;
	
	_float = std::strtof(_input.c_str(), &end);
	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
	printInput();
}

void	ScalarConverter::isDouble(){
	char *end = NULL;
	_double = std::strtod(_input.c_str(), &end);
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
	printInput();
}

void    ScalarConverter::printInput(){

}