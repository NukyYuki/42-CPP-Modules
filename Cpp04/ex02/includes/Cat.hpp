/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 22:19:47 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/06 17:50:27 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *_brain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const std::string &type);
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		void makeSound() const;
		Brain* getBrain();
};