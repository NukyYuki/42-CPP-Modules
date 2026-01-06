/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:21:58 by mipinhei          #+#    #+#             */
/*   Updated: 2026/01/06 14:15:44 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string zombiename;
    Zombie  *zombie;

    std::cout << "Zombie1 name: ";
    std::getline(std::cin, zombiename);
    zombie = new Zombie(zombiename);
    if (!zombie)
    {
        std::cout << "Error creating Zombie1" << std::endl;
    }
    Zombie *zombie2 = zombie->newZombie("Zombie 2");
    zombie->annouce();
    zombie2->annouce();
    delete zombie2;
    delete zombie;
    randomChump("Zombie 3");
    return 0;
}