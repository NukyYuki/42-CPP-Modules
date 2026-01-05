/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-01 13:57:26 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-01 13:57:26 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const std::string &type);
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		std::string getType() const;
		virtual void makeSound() const;
};