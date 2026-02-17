#include "iter.hpp"

void print(int &i) {
    std::cout << i << std::endl;
}

int main( void ) {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);
    return 0;
}