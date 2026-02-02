/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-02 23:14:04 by mipinhei          #+#    #+#             */
/*   Updated: 2026-02-02 23:14:04 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main(){
	Data	data;
	data._postCode = 42;
	data._adress = "42 Wallaby Way";
	data._country = "Australia";

	std::cout << "Original Data address: " << &data << std::endl;
	std::cout << "Original Data PostCode: " << data._postCode << std::endl;
	std::cout << "Original Data Adress: " << data._adress << std::endl;
	std::cout << "Original Data Country: " << data._country << std::endl;
	
	uintptr_t	serialized = Serializer::serialize(&data);
	std::cout << "Serialized Data (uintptr_t): " << serialized << std::endl;

	Data	*deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized Data address: " << deserialized << std::endl;
	std::cout << "Deserialized Data PostCode: " << deserialized->_postCode << std::endl;
	std::cout << "Deserialized Data Adress: " << deserialized->_adress << std::endl;
	std::cout << "Deserialized Data Country: " << deserialized->_country << std::endl;

	return (0);
}