#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include "PresidentialPardonForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "ShrubberyCreationForm.hpp"
#include <cstring>
#include <iostream>

int main()
{
	Bureaucrat bob("Bob", 138);

	Intern someInternRandom;

	AForm *form = someInternRandom.makeForm("Robotomy Request", "Bender");
	if (form)
		std::cout << "Created form" << std::endl;


	return (0);
}