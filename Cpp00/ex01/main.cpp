/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:23:04 by mipinhei          #+#    #+#             */
/*   Updated: 2025/11/27 10:23:10 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook PhoneBook;
	std::string getLine;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT : ";
		if (!std::getline(std::cin, getLine))
		{
			if (std::cin.eof())
			{
				std::cout << "\n";
				break ;
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(10, '\n');
				continue;
			}
		}
		if (getLine == "ADD")
			PhoneBook.contactAdd();
		else if (getLine == "SEARCH")
			PhoneBook.contactSearch();
		else if (getLine == "EXIT")
			break ;
		else
			std::cout << "Input ignored\nPlease insert ADD or SEARCH or EXIT\n";
	}
	return (0);
}
