#include "Array.hpp"

int main(void)
{
	// int *a = new int[2];
    // a[1] = 1;
    // a[23] = 2;
    // a[233] = 2;
	// std::cout << a << std::endl;
	// std::cout << a[2] << std::endl;

    Array<int>   array;
    std::cout << array[4] << std::endl ;
    std::cout << array.size() << std::endl ;
    return(0);
}