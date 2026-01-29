/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-29 13:02:16 by mipinhei          #+#    #+#             */
/*   Updated: 2026-01-29 13:02:16 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdint.h>
#include <iostream>
#include "Data.hpp"


class	Serializer{
	private:
		Serializer();
		Serializer(const Serializer &obj);
		~Serializer();
		Serializer &operator=(const Serializer &obj);
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};