/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 13:57:01 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/06 17:23:30 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp" 

int main()
{
	{
		std::cout << "----------Animal Brains----------" << std::endl;
		const int size = 100;
		Animal* animal[size];
		for (int i = 0; i < size; i++)
		{
			if(i < size / 2)
			{
				animal[i] = new Dog();
			}
			else
			{
				animal[i] = new Cat();
			}
		}
		for (int i = 0; i < size; i++){
			animal[i]->makeSound();
		}
		for (int i = 0; i < size; i++)
		{
			if(Dog *dog = dynamic_cast<Dog*>(animal[i]))
			{
				Brain *dogBrain = dog->getBrain();
				dogBrain->setIdea(0, "I am a dog");
				std::cout << dogBrain->getIdea(0) << std::endl;
			}
			else if(Cat *cat = dynamic_cast<Cat*>(animal[i]))
			{
				Brain *catBrain = cat->getBrain();
				catBrain->setIdea(0, "I am a cat");
				std::cout << catBrain->getIdea(0) << std::endl;
			}
		}
		for (int i = 0; i < size; i++)
		{
			delete animal[i];
		}
	}
	return 0;
}