/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 22:19:22 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/06 17:07:04 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Default Cat Constructor called" << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const std::string &type) : AAnimal(type)
{
	std::cout << "Default Parameter Cat Constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &obj) : AAnimal::AAnimal(obj){
	std::cout << "Cat Copy constructor called" << std::endl;
	_brain = new Brain(*obj._brain);
	*this = obj;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this == &other)
    {
        return (*this);
    }
	if (_brain)
		delete _brain;
	_brain = new Brain(*other.getBrain());
	_type = other._type;
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "Nyan Nyan" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->_brain);
}