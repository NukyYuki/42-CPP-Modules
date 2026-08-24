/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:16:36 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 17:21:54 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <map>

class BitCoinExchange{
    private:
        std::map<std::string, double> _database;

        void _loadDatabase(const std::string& dbPath);
        bool _isValidDate(const std::string& date) const;
        bool _isValidValue(const std::string& valStr, double& val) const;
        void _processLine(const std::string& line) const;

    public:
        BitCoinExchange();
        BitCoinExchange(const std::string& dbPath);
        BitCoinExchange(const BitCoinExchange &other);
        BitCoinExchange &operator=(const BitCoinExchange &other);
        ~BitCoinExchange();

        void run(const std::string& inputFile);
};