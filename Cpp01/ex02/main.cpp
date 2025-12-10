/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:49:26 by mipinhei          #+#    #+#             */
/*   Updated: 2025/12/10 15:24:04 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main(void)
{
    std::string str =  "HI THIS IS BRAIN";
    std::string &stringREF = str;
    std::string *stringPTR = &str;

    std::cout << "Memory adress of the string: " << &str << std::endl;
    std::cout << "Memory adress of the reference to string: " << &stringREF << std::endl;
    std::cout << "Memory adress of the pointer to string: " << &stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "String: " << str << std::endl;
    std::cout << "String Reference: " << stringREF << std::endl;
    std::cout << "String Pointer: " << *stringPTR << std::endl;
}