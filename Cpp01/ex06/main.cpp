/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-16 12:15:50 by mipinhei          #+#    #+#             */
/*   Updated: 2025-12-16 12:15:50 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		 std::cout << "Wrong usage.\ndefault: ./harlFilter [debug/info/warning/error]" << std::endl;
		return (1);
	}
	else
		harl.complain(av[1]);
	return (0);
}