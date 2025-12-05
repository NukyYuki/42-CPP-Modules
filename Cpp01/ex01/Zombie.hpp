/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:22:19 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/05 20:45:17 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std:: string name);
		~Zombie();
		void annouce(void);
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );