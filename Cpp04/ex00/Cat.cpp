/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 22:19:22 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-03 22:19:22 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
		std::cout << "Default Parameter Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal::Animal(obj){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	_type = other._type;
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "Nyan Nyan" << std::endl;
}