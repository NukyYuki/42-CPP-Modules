/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:54:44 by mipinhei          #+#    #+#             */
/*   Updated: 2026/02/24 16:53:58 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << "=== Testing MutantStack ===" << std::endl;
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Top element: " << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "\nIterating through MutantStack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "\nCopying MutantStack to std::stack:" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "std::stack top: " << s.top() << std::endl;
    std::cout << "std::stack size: " << s.size() << std::endl;
    
    std::cout << "\n=== Comparing with std::list ===" << std::endl;
    std::list<int> lst;
    
    lst.push_back(5);
    lst.push_back(17);
    
    std::cout << "Back element: " << lst.back() << std::endl;
    
    lst.pop_back();
    
    std::cout << "Size after pop: " << lst.size() << std::endl;
    
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    
    std::cout << "\nIterating through std::list:" << std::endl;
    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    
    ++lit;
    --lit;
    
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    
    std::cout << "\n=== Testing with strings ===" << std::endl;
    MutantStack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    strStack.push("42");
    
    std::cout << "String stack contents:" << std::endl;
    for (MutantStack<std::string>::iterator sit = strStack.begin(); 
         sit != strStack.end(); ++sit)
    {
        std::cout << *sit << std::endl;
    }
    
    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    MutantStack<int> mstack2(mstack);
    std::cout << "Copied stack size: " << mstack2.size() << std::endl;
    std::cout << "Copied stack top: " << mstack2.top() << std::endl;
    
    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    MutantStack<int> mstack3;
    mstack3.push(99);
    mstack3 = mstack;
    std::cout << "Assigned stack size: " << mstack3.size() << std::endl;
    std::cout << "Assigned stack top: " << mstack3.top() << std::endl;
    
    return 0;
}