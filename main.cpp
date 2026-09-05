/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:16:39 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 17:20:36 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    try{
        BitCoinExchange btc(av[1]);
        btc.run(av[1]);
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
        return 1;
    }
    return (0);    
}
