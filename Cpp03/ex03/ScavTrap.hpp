/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-18 10:18:47 by mipinhei          #+#    #+#             */
/*   Updated: 2025-12-18 10:18:47 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	
	bool _gatekeeper;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap& other);
		void attack(const std::string& target);
		void guardGate();
};