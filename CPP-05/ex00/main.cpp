#include "Bureaucrat.hpp"
#include <cstring>
#include <iostream>

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