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

BitCoinExchange::BitCoinExchange(std::string file){
    
}

BitCoinExchange::BitCoinExchange(const BitCoinExchange &other){
    *this = other;
}

BitCoinExchange &BitCoinExchange::operator=(const BitCoinExchange &other){
    if (this != &other){
        // Copy data members from other to this object
    }
    return *this;
}

BitCoinExchange::~BitCoinExchange(){
    
}

