
#include <iostream>
#include <vector>
#include <map>

int main(void)
{
    std::map<int,int> test;

    if(test.find(0))
    {
        std::cout << "Finded" << std::endl;
    }
}