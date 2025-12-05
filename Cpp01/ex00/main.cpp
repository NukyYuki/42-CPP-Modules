/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:21:58 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/05 20:21:59 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string zombiename;
    Zombie  *zombie;

    std::cout << "Zombie name: ";
    std::getline(std::cin, zombiename);
    zombie = new Zombie(zombiename);
    if (!zombie)
    {
        std::cout << "Error creating Zombie" << std::endl;
    }
    Zombie *zombie2 = zombie->newZombie("Zombie 2");
    zombie->annouce();
    zombie2->annouce();
    delete zombie2;
    delete zombie;
    randomChump("Zombie 3");
    return 0;
}