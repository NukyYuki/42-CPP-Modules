/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:22:13 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/05 21:24:08 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(10, "Sanji");

    for (int i = 0; i < 10; i++)
    {
        zombie[i].annouce();
    }
    delete[] zombie;
    return 0;
}