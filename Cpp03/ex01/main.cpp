/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-18 10:18:11 by mipinhei          #+#    #+#             */
/*   Updated: 2025-12-18 10:18:11 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{  
    ClapTrap clap("Clap1");
    ScavTrap scav("Scav1");
    std::cout << std::endl;

    clap.attack("a target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    std::cout << std::endl;
    
    scav.attack("another target");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();
    std::cout << std::endl;

    return 0;
}