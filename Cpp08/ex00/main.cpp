/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:21:19 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/19 12:08:48 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    std::vector<int> vec;
    
    for(int i = 0; i < 10; i++)
        vec.push_back(i);
    
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it;
        if (it != vec.end() - 1)
            std::cout << ", ";
    }
    
    std::cout << std::endl;
    try{
        std::cout << "Found given number: " << *easyfind(vec, 1) << std::endl;
        std::cout << "Found given number: " << *easyfind(vec, 5) << std::endl;
        std::cout << "Found given number: " << *easyfind(vec, 7) << std::endl;
        std::cout << "Found given number: " << *easyfind(vec, 3) << std::endl;
        std::cout << "Found given number: " << *easyfind(vec, 10) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what();
    }

    try{
       std::cout << "Found given number: " << *easyfind(vec, 11);
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what();
    }
     try{
       std::cout << "Found given number: " << *easyfind(vec, -1);
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what();
    }
}