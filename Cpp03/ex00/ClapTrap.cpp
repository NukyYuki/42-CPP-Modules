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

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
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
    if (this == &other)
    {
        return (*this);
    }
	_name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << this->_name << " Health Status: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy left to repair!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " heals " << amount << " Hit Points!" << std::endl;
    _hitPoints += amount;
    _energyPoints--;
    std::cout << this->_name << " Health Status: " << _hitPoints << std::endl;
}