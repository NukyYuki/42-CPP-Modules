#pragma once

#include <iostream>
#include <string>

template <typename T> void swap(T &int1, T &int2){

    T temp = int1;
    int1 = int2;
    int2 = temp;
    return;
}

template <typename T> T max(T a, T b){
    return (a > b ? a : b);
}

template <typename T> T min(T a, T b){
    return (a < b ? a : b);
}