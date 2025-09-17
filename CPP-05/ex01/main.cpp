#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstring>
#include <iostream>

int main()
{
	try
	{
	Form f("Tax Evasion", 15,150);
	std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}

	return (0);
}