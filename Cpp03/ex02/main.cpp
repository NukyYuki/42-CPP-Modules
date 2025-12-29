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
#include "FragTrap.hpp"

int main()
{  
    std::cout << "--- BEGIN TEST: ClapTrap / ScavTrap / FragTrap ---" << std::endl;

    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");
    FragTrap frag("FR4G-TP");

    std::cout << std::endl;
    clap.attack("an enemy");
    scav.attack("a wild target");
    frag.attack("the boss");

    std::cout << std::endl;
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.takeDamage(10);
    scav.beRepaired(5);

    frag.takeDamage(7);
    frag.beRepaired(4);

    std::cout << std::endl;
    // class-specific behaviours
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << std::endl;
    std::cout << "--- END OF TEST ---" << std::endl;

    return 0;
}