#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of parameters | type something ./convert 0.0f" << std::endl;
		return (-1);
	}

	std::string input(argv[1]);

	ScalarConverter::convert(input);
	return (0);
}