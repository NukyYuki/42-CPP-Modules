/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:17:50 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 10:54:27 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(){
	
/* 	srand(time(NULL)); */

	int random = rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base* p){
	std::cout << "Pointer identify called" << std::endl;
	std::cout << "Pointer type: " << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p){
	std::cout << "Reference identify called" << std::endl;
	std::cout << "reference type: " << std::endl;
	try{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bad cast to A &" << std::endl;
	}
	try{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bad cast to B &" << std::endl;
	}
	try{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bad cast to C &" << std::endl;
	}
}

int main(){
	srand(time(NULL));
	Base	*base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}