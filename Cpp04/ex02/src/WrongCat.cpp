/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 22:58:06 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-03 22:58:06 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : _type(type)
{
		std::cout << "Default Parameter WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAAnimal::WrongAAnimal(obj) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	_type = other._type;
	return (*this);
}

std::string WrongCat::getType() const
{
	return(_type);
}

void WrongCat::makeSound() const{
	std::cout << "Wrong Nyan Nyan" << std::endl;
}