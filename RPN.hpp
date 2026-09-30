/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:16:36 by mipinhei          #+#    #+#             */
/*   Updated: 2026/09/30 15:31:54 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include <stack>

class RPN{
    private:
        std::stack<int> _stack;

        bool _isOperator(char c) const;
        void _applyOperator(char op);

    public:
        RPN();
        RPN(const RPN& copy);
        RPN& operator=(const RPN& copy);
        ~RPN();

        void evaluate(const std::string& expression);
};