/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 22:19:16 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/06 17:13:44 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog Constructor called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Default Parameter Dog Constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal::Animal(obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	_brain = new Brain(*obj._brain);
	*this = obj;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	_brain = new Brain(other.getBrain());
	_type = other._type;
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->_brain);
}