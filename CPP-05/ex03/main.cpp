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

	Intern someRandomIntern;
	AForm *rrf;
	AForm *pp;
	AForm *shrubbery;

	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	pp = someRandomIntern.makeForm("Presidential Pardon", "Prison");
	shrubbery = someRandomIntern.makeForm("Shrubbery Creation", "Garden");

	std::cout << "\033[31m";
	std::cout << "\n******************************************";
	std::cout << "\n*********TESTING WRONG FORMS 1 **************";
	std::cout << "\n******************************************\n"
			  << std::endl;
	std::cout << "\033[0m";

	AForm *error;
	AForm *error2;

	error = someRandomIntern.makeForm("Empty", "Bender");
	error2 = someRandomIntern.makeForm("presidential pardonn", "Bender");

	std::cout << "\033[31m";
	std::cout << "\n******************************************";
	std::cout << "\n*********TESTING SIGNING FORMS 2 ************";
	std::cout << "\n******************************************\n"
			  << std::endl;
	std::cout << "\033[0m";

	Bureaucrat bob("Bob", 100);

	try
	{
			bob.signForm(*rrf);
			bob.signForm(*pp);
			bob.signForm(*shrubbery);
			shrubbery->execute(bob);
		bob.signForm(*error);
		bob.signForm(*error);
	}
	catch (std::exception &msg)
	{
		std::cout << "ERROR: " << msg.what() << std::endl;
	}

	delete rrf;
	delete pp;
	delete shrubbery;
	delete error;
	delete error2;

	return (0);
}