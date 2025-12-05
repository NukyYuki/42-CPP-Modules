/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:22:21 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/05 21:25:37 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	if (!zombie)
	{
		std::cout << "Error creating horde" << std::endl;
		return NULL;
	}
	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
	}
	return zombie;
}