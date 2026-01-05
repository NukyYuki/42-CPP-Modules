/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 22:19:47 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-03 22:19:47 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	private:
		Brain *_brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const std::string &type);
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		void makeSound() const;
		*Brain getBrain()
};