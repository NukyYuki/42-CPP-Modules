/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:31:31 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/10 15:50:32 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

 class Weapon{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(std::string _type);
        ~Weapon();
        std::string const &getType(void);
        void    setType(std::string newtype);
 };