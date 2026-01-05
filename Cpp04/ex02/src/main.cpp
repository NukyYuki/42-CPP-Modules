/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-01 13:57:01 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-01 13:57:01 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "WrongAAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp" 
#include "Animal.hpp"

int main()
{
	int main()
{
	{
		std::cout << "----------AAnimal----------" << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();

		delete j;
		delete i;

	}
	return 0;
}
}