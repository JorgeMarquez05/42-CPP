#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <string>

bool isOperator(std::string parameter)
{
	char operators[5] = {'+', '-', '*', '/'};
	for (size_t idx = 0; idx < 4; ++idx)
	{
		if (parameter.find(operators[idx]) != std::string::npos)
			return (true);
	}
	return (false);
}

int split(RPN &polish, std::string arguments, const char separator)
{

	size_t pos = arguments.find(separator);
	if (pos == std::string::npos)
		return (-1);
	while (pos != std::string::npos)
	{
		if (pos > 1)
			return (-1);
		std::string actualParameter = arguments.substr(0, pos);
		if (!isOperator(actualParameter) && !std::isdigit(actualParameter[0]))
			return (-1);
		if (isOperator(actualParameter))
			polish.addOperator(actualParameter[0]);
		else
			polish.addNumber(actualParameter[0] - 48);

		polish.makeOperation();
		arguments = arguments.substr(pos + 1);
		pos = arguments.find(separator);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		std::cerr << "Error" << std::endl;
	// std::cout << argv[1] << std::endl;

	RPN polish;

	std::string arguments(argv[1]);
	if (split(polish, arguments, ' '))
	{
		std::cerr << "Error" << std::endl;
		return (-1);
	}
	std::cout << polish.finalResult() << std::endl;
}