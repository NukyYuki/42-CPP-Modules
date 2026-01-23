/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-01 13:58:47 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-01 13:58:47 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal Constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
		std::cout << "Default Parameter AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj){
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = obj;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	_type = other._type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return(_type);
}