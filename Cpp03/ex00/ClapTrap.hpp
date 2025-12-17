/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:33:52 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/17 16:54:17 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {
    private:
        std::string _name;
        int _Hit_points;
        int _Energy_points;
        int _Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &obj);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap& other);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};