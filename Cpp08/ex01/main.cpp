/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:10:54 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 14:45:35 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);   
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    
        // Testing with a larger span and random numbers
        srand(time(NULL));
        Span largeSpan = Span(10000);
        largeSpan.fillRandNumbers(10000);
        std::cout << "Shortest Span in large span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span in large span: " << largeSpan.longestSpan() << std::endl;
        
        sp.addNumber(42); // This should throw an exception since the span is already full
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    };
    
    try{
        Span smallSpan = Span(1);
        smallSpan.addNumber(5);
        std::cout << "Shortest Span in small span: " << smallSpan.shortestSpan() << std::endl; // This should throw an exception since there is only one number
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

     try{
        Span smallSpan = Span(1);
        smallSpan.addNumber(5);
        std::cout << "Longest Span in small span: " << smallSpan.longestSpan() << std::endl; // This should throw an exception since there is only one number
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}