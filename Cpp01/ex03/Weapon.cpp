/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:53:24 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/10 15:55:28 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    
}

Weapon::Weapon(std::string _type){
    this->_type = _type;
}

Weapon::~Weapon(){
    
}

void Weapon::setType(std::string _type)
{
    this->_type = _type;
}

std::string const &Weapon::getType()
{
    return (this->_type);
}