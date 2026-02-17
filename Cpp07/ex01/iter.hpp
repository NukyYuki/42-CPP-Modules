#pragma once

#include <iostream>

template <typename T, typename N> 
void iter(T *a, int const len, void (*f)(N &)){

   if (!a)
    {
        std::cout << "Error: invalid array pointer" << std::endl;
        return ;
    }
    if (!f)
    {
        std::cout << "Error: Invalid function pointer" << std::endl;
        return ;
    }
    if (len < 1)
    {
        std::cout << "Error: Invalid array size" << std::endl;
        return ;
    }
    for (int i = 0; i < len; i++)
        f(a[i]);
    return;
}