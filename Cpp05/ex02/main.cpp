/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:33:57 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/13 15:34:01 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
	Bureaucrat a("a", 10);
	std::cout << a << '\n';
	std::cout << '\n';

	Bureaucrat b("b", 5);
	std::cout << b << '\n';
	std::cout << '\n';

	AForm fa("fa", 7, 1);
	std::cout << fa << '\n';
	a.signAForm(fa);
	std::cout << fa << '\n';
	b.signAForm(fa);
	std::cout << fa << '\n';
	b.signAForm(fa);
	std::cout << fa << '\n';
	std::cout << '\n';

	try
	{
		AForm fb("fb", 151, 1);
		std::cout << fb << '\n';
	}
	catch (const std::exception& e)
	{
		std::cout << "fb constructor failed: " << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		AForm fb("fc", 150, 0);
		std::cout << fb << '\n';
	}
	catch (const std::exception& e)
	{
		std::cout << "fc constructor failed: " << e.what() << '\n';
	}
}