#include <iostream>
#include "whatever.hpp"

// int main(void)
// {
// int n1 = 10;
// int n2 = 20;
//
// std::cout << max("abc1", "abc2") << std::endl;
// std::cout << min("abc1", "abc2") << std::endl;
//
// std::cout << min(50, 25) << std::endl;
//
// std::cout << "n1: " << n1 << std::endl;
// std::cout << "n2: " << n2 << std::endl;
// swap(n1, n2);
//
// std::cout << "n1: " << n1 << std::endl;
// std::cout << "n2: " << n2 << std::endl;
//
// return (0);
// }

int main(void)
{
    int a = 2;
    int b = 3;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    return 0;
}