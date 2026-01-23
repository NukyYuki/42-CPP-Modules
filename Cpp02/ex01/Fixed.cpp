/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:06:33 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/17 12:40:55 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val){
	std::cout << "Int constructor called" << std::endl;
	this->_num_val = val << this->_bits;
}

Fixed::Fixed(const float val){
	std::cout << "Float constructor called" << std::endl;
	this->_num_val = roundf(static_cast<float>(val  * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const &obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_num_val = other.getRawBits();
	return (*this);
}

int Fixed::toInt(void) const
{
	return (this->_num_val >> this->_bits);
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(this->_num_val) / (1 << this->_bits));
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_num_val);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	_num_val = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed& other){
	out << other.toFloat();
	return (out);
}