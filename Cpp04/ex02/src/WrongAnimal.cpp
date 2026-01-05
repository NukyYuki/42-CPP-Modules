/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 22:49:10 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-03 22:49:10 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal()
{
	std::cout << "Default WrongAAnimal Constructor called" << std::endl;
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal Destructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const std::string &type) : _type(type)
{
		std::cout << "Default Parameter WrongAAnimal Constructor called" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal &obj){
	std::cout << "WrongAAnimal Copy constructor called" << std::endl;
	*this = obj;
}

WrongAAnimal& WrongAAnimal::operator=(const WrongAAnimal& other)
{
	std::cout << "WrongAAnimal Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	_type = other._type;
	return (*this);
}

std::string WrongAAnimal::getType() const
{
	return(_type);
}

void WrongAAnimal::makeSound() const{
	std::cout << "WrongAAnimal sound " << std::endl;
}