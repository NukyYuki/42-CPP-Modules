/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:01:17 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 11:12:11 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout << "Default Constructor Called" << std::endl;
	_intImpossible = false;
	_floatImpossible = false;
	_doubleImpossible = false;
}

ScalarConverter::ScalarConverter(const std::string input) : _input(input){
    std::cout << "Paramatized Constructor Called" << std::endl;
	_intImpossible = false;
	_floatImpossible = false;
	_doubleImpossible = false;
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
	_intImpossible = obj._intImpossible;
	_floatImpossible = obj._floatImpossible;
	_doubleImpossible = obj._doubleImpossible;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj){
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		_input = obj._input;
		_type = obj._type;
		_char = obj._char;
		_int = obj._int;
		_float = obj._float;
		_double = obj._double;
		_intImpossible = obj._intImpossible;
		_floatImpossible = obj._floatImpossible;
		_doubleImpossible = obj._doubleImpossible;
	}
	return (*this);
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
		inputCase == "+inf" || inputCase == "nanf" ||
		inputCase == "inf" || inputCase == "inff")
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
	return (0); // Input type is unknown
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
			std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
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
	errno = 0;
	char* end = NULL;
	long long longInt = std::strtoll(_input.c_str(), &end, 10);
	if (end == _input.c_str() || *end != '\0' || errno == ERANGE)
		_intImpossible = true;
	if (longInt < std::numeric_limits<int>::min() || longInt > std::numeric_limits<int>::max())
		_intImpossible = true;

	if (!_intImpossible)
	{
		_int = static_cast<int>(longInt);
		_char = static_cast<char>(_int);
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
	}
	else
	{
		_int = 0;
		_char = 0;
		_float = static_cast<float>(longInt);
		_double = static_cast<double>(longInt);
	}
	printInput();
}

void	ScalarConverter::isFloat(){
	char *end = NULL;
	errno = 0;
	_float = std::strtof(_input.c_str(), &end);
	if (end == _input.c_str() || *end == '\0' || errno == ERANGE || !(*end == 'f' && *(end + 1) == '\0'))
	{
		_floatImpossible = true;
		_intImpossible = true;
		_doubleImpossible = true;
		printInput();
		return;
	}
	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
	printInput();
}

void	ScalarConverter::isDouble(){
	char *end = NULL;
	errno = 0;
	_double = std::strtod(_input.c_str(), &end);
	if (end == _input.c_str() || *end != '\0' || errno == ERANGE)
	{
		_doubleImpossible = true;
		_floatImpossible = true;
		_intImpossible = true;
		printInput();
		return;
	}
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
	printInput();
}

void    ScalarConverter::printInput(){
//	CHAR CHARACTER OUTPUT	
	std::cout << "char: ";
	if (getType() != -1 && getDouble() >= -128 && getDouble() <= 127 && !_intImpossible)
	{
		if (std::isprint(static_cast<unsigned char>(_char)))
			std::cout << "'" << _char << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;

//	INT INTEGER OUTPUT
	std::cout << "int: ";
	if (getType() != -1 && getDouble() >= std::numeric_limits<int>::min() && getDouble() <=
	std::numeric_limits<int>::max() && _intImpossible != true)
		std::cout << _int << std::endl;
	else
		std::cout << "impossible" << std::endl;

//	FLOAT FLOATING POINT OUTPUT
	std::cout << "float: ";
	if  (getType() != -1)
	{
		if (_floatImpossible == true)
		{
			std::cout << "impossible" << std::endl;
		}
		else
		{
			if (this->getDouble() - static_cast<int>(this->getDouble()) == 0)
				std::cout << std::fixed << std::setprecision(1) << getFloat() << "f" << std::endl;
			else
				std::cout << getFloat() << "f" << std::endl;
		}
	}
	else if (getType() == -1)
	{
		if (getInput() == "nan" || getInput() == "nanf")
			std::cout << "nanf" << std::endl;
		else if (getInput()[0] == '+' && (getInput() == "+inf" || getInput() == "+inff"))
			std::cout << "+inff" << std::endl;
		else if (getInput()[0] == '-' && (getInput() == "-inf" || getInput() == "-inff"))
			std::cout << "-inff" << std::endl;
		else
		{
			std::cout << "impossible" << std::endl;
		}
	}

//	DOUBLE DOUBLE POINT OUTPUT
	std::cout << "double: ";
	if (getType() != -1)
	{
		if (_doubleImpossible == true)
		{
			std::cout << "impossible" << std::endl;
		}
		else
		{
			if (this->getDouble() - static_cast<int>(this->getDouble()) == 0)
				std::cout << std::fixed << std::setprecision(1) << getDouble() << std::endl;
			else
				std::cout << getDouble() << std::endl;
		}
	}
	else if (getType() == -1)
	{
		if (getInput() == "nan" || getInput() == "nanf")
			std::cout << "nan" << std::endl;
		else if (getInput()[0] == '+' && (getInput() == "+inf" || getInput() == "+inff"))
			std::cout << "+inf" << std::endl;
		else if (getInput()[0] == '-' && (getInput() == "-inf" || getInput() == "-inff"))
			std::cout << "-inf" << std::endl;
		else
		{
			std::cout << "impossible" << std::endl;
		}
	}
}

void ScalarConverter::convert(const std::string &input)
{
	ScalarConverter scalar(input);
}