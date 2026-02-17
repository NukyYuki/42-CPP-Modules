/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:30:32 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/17 12:30:32 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {
    std::cout << "Testing Array class template with int type:" << std::endl;
    Array<int> arr(5);
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    std::cout << "Array contents: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << "Testing Array class template with std::string type:" << std::endl;
    Array<std::string> strArr(3);
    strArr[0] = "Hello";
    strArr[1] = "World";
    strArr[2] = "!";
    std::cout << "Array contents: ";
    for (int i = 0; i < 3; i++)
        std::cout << strArr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << "Testing out of bounds access:" << std::endl;
    try {
        std::cout << arr[5] << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what();
    }
    std::cout << std::endl << "Testing out of bounds access:" << std::endl;
    try {
        std::cout << arr[-5] << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what();
    }
    std::cout << std::endl << "Testing access on empty array:" << std::endl;
    Array<int> emptyArr;
    try {
        std::cout << emptyArr[0] << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Caught exception: " << e.what();
    }
    std::cout << std::endl;
    return 0;
}