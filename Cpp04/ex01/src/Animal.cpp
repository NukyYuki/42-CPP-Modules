/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 13:58:47 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/06 17:06:55 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
		std::cout << "Default Parameter Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &obj){
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = obj;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	_type = other._type;
	return (*this);
}

std::string Animal::getType() const
{
	return(_type);
}

void Animal::makeSound() const{
	std::cout << "Animal sound " << std::endl;
}