#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstring>
#include <iostream>

int main()
{
	Bureaucrat bob("Bob", 15);
	Form f("Tax Evasion", 15, 150);
	std::cout << f;

	bob.signForm(f);
	bob.signForm(f);
	// try
	// {
	// Form f("Tax Evasion", 15,150);
	// std::cout << f << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what();
	// }

	return (0);
}