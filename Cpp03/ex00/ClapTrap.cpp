/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:39:48 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/17 17:16:23 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0) 
{
    std::cout << "Constructor for " << name << " called" << std::endl;  
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = other._name;
    _Hit_points = other._Hit_points;
    _Energy_points = other._Energy_points;
    _Attack_damage = other._Attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " << _Attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << "takes " << amount << " points of damage!" << std::endl;
    _Hit_points -= amount;
    if (_Hit_points < 0)
        _Hit_points = 0;
    std::cout << this->_name << "Health Status: " << _Hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << this->_name << "heals " << amount << " Hit Points!" << std::endl;
    _Hit_points += amount;
}