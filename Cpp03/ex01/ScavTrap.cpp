/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-18 10:18:50 by mipinhei          #+#    #+#             */
/*   Updated: 2025-12-18 10:18:50 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Constructor for " << name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other), _gatekeeper(other._gatekeeper)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Scavtrap copy assignment operator called" << std::endl;
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

void ScavTrap::attack(const std::string& target){
 if (_energyPoints <= 0 || _hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy or hit points left to attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate(){
	if (_hitPoints <= 0)
		return ;
	_gatekeeper = !_gatekeeper;
	if (_gatekeeper)
		std::cout << "ScavTrap " << _name << " has entered Gate Keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << _name <<  " leaves Gate Keeper mode" << std::endl;
}