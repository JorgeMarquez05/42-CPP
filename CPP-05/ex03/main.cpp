#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstring>
#include <iostream>

int main()
{
	Bureaucrat bob("Bob", 138);
	PresidentialPardonForm f("Corrupt");
	ShrubberyCreationForm d("Home");
	std::cout << f;
	std::cout << d;

	bob.signForm(f);
	bob.signForm(d);

	try
	{
		f.execute(bob);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	bob.executeForm(d);

	return (0);
}