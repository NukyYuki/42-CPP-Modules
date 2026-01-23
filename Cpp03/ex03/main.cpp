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
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "--- EX03 TEST START ---" << std::endl;

    ClapTrap clap("Clap1");
    ScavTrap scav("Scav1");
    FragTrap frag("Frag1");
    DiamondTrap diam("Diam1");

    std::cout << std::endl;
    clap.attack("a target");
    scav.attack("a target");
    frag.attack("a target");
    diam.attack("a target");

    std::cout << std::endl;
    clap.takeDamage(5);
    clap.beRepaired(3);
    
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    frag.takeDamage(7);
    frag.beRepaired(4);
    frag.highFivesGuys();

    std::cout << std::endl;
    diam.takeDamage(8);
    diam.beRepaired(2);
    diam.guardGate();
    diam.highFivesGuys();
    diam.whoAmI();
    std::cout << std::endl << "--- EX03 TEST END ---" << std::endl;
    return 0;
}