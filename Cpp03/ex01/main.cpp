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

int main()
{  
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    clap1.attack("ClapTwo");
    clap2.takeDamage(0);
    clap2.beRepaired(5);
    clap2.attack("ClapOne");
    clap1.takeDamage(0);
    clap1.beRepaired(3);

    return 0;
}