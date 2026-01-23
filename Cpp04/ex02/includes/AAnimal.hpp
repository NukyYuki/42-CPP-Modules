/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
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

class AAnimal{
	protected:
		std::string _type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);
		std::string getType() const;
		virtual void makeSound() const = 0;
};