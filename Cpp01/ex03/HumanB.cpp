/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-10 23:57:24 by mipinhei          #+#    #+#             */
/*   Updated: 2025-12-10 23:57:24 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}
HumanB::~HumanB(){
	
}

void HumanB::attack(void){
	if (_weapon)
		std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}