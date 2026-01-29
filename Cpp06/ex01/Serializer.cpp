/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-29 13:02:13 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-29 13:02:13 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "Default Serializer Constructor Called" << std::endl;
}

Serializer::Serializer(const Serializer &obj){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

Serializer &Serializer::operator=(const Serializer &obj){
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		// No member variables to copy
	}
	return (*this);
}

Serializer::~Serializer(){
	std::cout << "Default Serializer Destructor Called" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}