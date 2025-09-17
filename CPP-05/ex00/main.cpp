#include "Bureaucrat.hpp"
#include <cstring>
#include <iostream>

int main()
{
	try
	{
		Bureaucrat a("Alisson", 1);
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
		a.increaseGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	return (0);
}