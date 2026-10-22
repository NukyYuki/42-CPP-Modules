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

#include "RPN.hpp"

RPN::RPN() {

}

RPN::RPN(const RPN& copy) {
    *this = copy;
}

RPN& RPN::operator=(const RPN& copy) {
    if (this != &copy) {
        this->_stack = copy._stack;
    }
    return *this;
}

RPN::~RPN() {

}

bool RPN::_isOperator(char c) const {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

void RPN::_applyOperator(char op) {
	if (_stack.size() < 2)
		throw std::runtime_error("Error");

	int b = _stack.top();
	_stack.pop();
	int a = _stack.top();
	_stack.pop();
	if (op == '+')
		_stack.push(a + b);
	else if (op == '-')
		_stack.push(a - b);
	else if (op == '*')
		_stack.push(a * b);
	else if (op == '/') {
		if (b == 0)
			throw std::runtime_error("Error");
		_stack.push(a / b);
	}
}

void RPN::evaluate(const std::string& expression) {

}