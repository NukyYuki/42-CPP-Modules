/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:16:44 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 17:16:45 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitCoinExchange::BitCoinExchange(){
    
}

BitCoinExchange::BitCoinExchange(const std::string& dbPath){
    _loadDatabase(dbPath);
}

BitCoinExchange::BitCoinExchange(const BitCoinExchange &other){
    *this = other;
}

BitCoinExchange &BitCoinExchange::operator=(const BitCoinExchange &other){
    if (this != &other){
    	this->_database = other._database;
    }
    return *this;
}

BitCoinExchange::~BitCoinExchange(){
    
}

void BitCoinExchange::_loadDatabase(const std::string& dbPath){
    std::string line;
    std::ifstream dbFile;

    dbFile.open(dbPath);
    if (!dbFile.is_open())
        throw std::runtime_error("Error: Could not open File: " + dbPath);
	std::getline(dbFile, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Error: Invalid database format");
    while (std::getline(dbFile, line))
        this->_processLine(line);
}

void BitCoinExchange::_processLine(const std::string& line) {
    size_t pos = line.find(',');
	double value;
	std::string date;
    if (pos != std::string::npos)
	{
        date = line.substr(0, pos);
		if (!_isValidDate(date))
			throw std::runtime_error("Error: Invalid date format in database: " + date);
        value = std::stod(line.substr(pos + 1));
		if (!_isValidValue(line.substr(pos + 1), value))
			throw std::runtime_error("Error: Invalid value format in database: " + line.substr(pos + 1));
        this->_database[date] = value;
    }
}

bool BitCoinExchange::_isValidDate(const std::string& date) const{
	struct tm time;
	if (!strptime(date.c_str(), "%Y-%m-%d", &time))
		return false;
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		daysInMonth[2] = 29;
	if (day > daysInMonth[month])
		return false;
    return true;
}

bool BitCoinExchange::_isValidValue(const std::string& valStr, double& val) const{
    if (valStr.empty())
        return false;

    char* endPtr;
    val = std::strtod(valStr.c_str(), &endPtr);

    if (endPtr == valStr.c_str())
        return false;

    if (*endPtr != '\0')
        return false;

    if (val < 0)
        return false;

    return true;
}

void BitCoinExchange::run(const std::string& inputFile){
	std::ifstream file(inputFile);
	if (!file.is_open())
		throw std::runtime_error("Error: Could not open file: " + inputFile);
	std::string line;
	std::getline(file, line);

	while (std::getline(file, line)) {
		if (line.empty())
			continue;
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos){
			std::cout << "Error:: Bad input => " << line << std::endl;
			continue;;
		}
		std::string date = line.substr(0, pipePos);
		std::string valueStr = line.substr(pipePos + 1);

		date.erase(date.find_last_not_of("\t\r\n ") + 1);
		valueStr.erase(0, valueStr.find_first_not_of("\t\r\n "));

		if (!_isValidDate(date)){
			std::cout << "Error: Bad Input => " << date << std::endl;
			continue;
		}

		double value;
		if (!_validateInputValue(valueStr, value))
			continue;

		_executeLookup(date, value);
	}
}