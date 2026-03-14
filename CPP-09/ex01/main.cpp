#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
	if (argc != 2)
		std::cerr << "Error" << std::endl;

	RPN polish;

	std::string arguments(argv[1]);

	polish.calculate(arguments);
}