/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 22:49:06 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-03 22:49:06 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAAnimal{
	protected:
		std::string _type;
	public:
		WrongAAnimal();
		virtual ~WrongAAnimal();
		WrongAAnimal(const std::string &type);
		WrongAAnimal(const WrongAAnimal &obj);
		WrongAAnimal &operator=(const WrongAAnimal &obj);
		std::string getType() const;
		virtual void makeSound() const;
};