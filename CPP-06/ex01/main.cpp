#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data test;
    test._name = "Jorge";
    test._value = 100;

    uintptr_t n = Serializer::serialize(&test);

    std::cout << n << std::endl;

    Data *unserialize = Serializer::deserialize(n);

    std::cout << "Name " << unserialize->_name << " Grade " << unserialize->_value << std::endl ;
}