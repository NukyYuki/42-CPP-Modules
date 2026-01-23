/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 22:19:19 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-03 22:19:19 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		virtual ~Dog();
		Dog(const std::string &type);
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		void makeSound() const;
};