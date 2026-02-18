/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:42:16 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 11:06:31 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Usage: ./converter <literal_value>" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}