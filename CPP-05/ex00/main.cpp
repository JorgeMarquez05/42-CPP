#include "Bureaucrat.hpp"
#include <cstring>
#include <iostream>

int main()
{
	try
	{
		std::cout << "Creating Bureaucrat with grade above the 1 (highest)" << std::endl;
		Bureaucrat b1("Alisson", 0);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nCreating Bureaucrat with a grade below 150 (lowest)" << std::endl;
		Bureaucrat b2("Alice", 151);
		std::cout << b2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << "Creating Bureaucrat with grade 1 (highest)" << std::endl;
		Bureaucrat b3("Bob", 1);
		std::cout << b3 << std::endl;
		std::cout << "Trying to increase grade beyond max (should throw)" << std::endl;
		b3.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\nCreating Bureaucrat with grade 150 (lowest)" << std::endl;
		Bureaucrat b4("Peter", 150);
		std::cout << b4 << std::endl;
		std::cout << "Trying to decrease grade beyond min (should throw)" << std::endl;
		b4.decreaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	return (0);
}