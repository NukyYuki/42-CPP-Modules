/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:55:21 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/19 15:51:03 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static void printInt(int const &i) {
    std::cout << i << std::endl;
}

static void printStr(std::string const &str) {
    std::cout << str << std::endl;
}

static void addOne(int &i) {
    i += 1;
}

int main( void ) {
    int arr[] = {1, 2, 3, 4, 5};
    std::string strArr[] = {"Hello", "World", "!"};

    std::cout << "Iterating over integer array: " << std::endl;
    iter(arr, 5, printInt);
    std::cout << std::endl;

    std::cout << "Adding 1 to each element: " << std::endl;
    iter(arr, 5, addOne);
    iter(arr, 5, printInt);
    std::cout << std::endl;

    std::cout << "Iterating over string array: " << std::endl;
    iter(strArr, 3, printStr);
    std::cout << std::endl;

    const int constArr[] = {10, 20, 30, 40, 50};
    std::cout << "Iterating over const integer array (read-only):" << std::endl;
    iter(constArr, 5, printInt);  // read-only function with const array
//    iter(constArr, 5, addOne);  // This does not compile - can't modify const array
return 0;
}