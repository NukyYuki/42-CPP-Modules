/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:55:21 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/18 13:29:35 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static void printInt(int &i) {
    std::cout << i << std::endl;
}

static void printStr(std::string &str) {
    std::cout << str << std::endl;
}

int main( void ) {
    int arr[] = {1, 2, 3, 4, 5};
    std::string strArr[] = {"Hello", "World", "!"};

    std::cout << "Iterating over integer array:" << std::endl;
    iter(arr, 5, printInt);
    std::cout << std::endl;

    std::cout << "Iterating over string array:" << std::endl;
    iter(strArr, 3, printStr);
    std::cout << std::endl;
return 0;
}