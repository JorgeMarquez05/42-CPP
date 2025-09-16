#include <cstring>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
       Bureaucrat a("Alisson", 150);
       std::cout << a << std::endl;
       a.decreaseGrade();
       std::cout << a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what();
    }

	return (0);
}