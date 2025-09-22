#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstring>
#include <iostream>

int main()
{
	Bureaucrat bob("Bob", 5);
	PresidentialPardonForm f("Corrupt");
	std::cout << f;

	// bob.signForm(f);
	bob.signForm(f);

	try
	{
		f.execute(bob);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

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