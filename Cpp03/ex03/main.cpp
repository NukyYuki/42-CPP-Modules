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

    ClapTrap a("Clappy");
    ScavTrap b("Scavy");
    FragTrap c("Fraggy");
    DiamondTrap d("Diappy");

    std::cout << std::endl;
    a.attack("a target");
    b.attack("a target");
    c.attack("a target");
    d.attack("a target");

    std::cout << std::endl;
    a.takeDamage(5);
    a.beRepaired(3);

    b.takeDamage(10);
    b.beRepaired(5);
    b.guardGate();

    c.takeDamage(7);
    c.beRepaired(4);
    c.highFivesGuys();

    std::cout << std::endl;
    d.takeDamage(8);
    d.beRepaired(2);
    d.whoAmI();

    std::cout << std::endl << "--- EX03 TEST END ---" << std::endl;
    return 0;
}