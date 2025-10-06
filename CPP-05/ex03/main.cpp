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

	try
	{
		error = someRandomIntern.makeForm("Empty", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	try
	{
		error2 = someRandomIntern.makeForm("presidential pardonn", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

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
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	std::cout << "\033[31m";
	std::cout << "\n******************************************";
	std::cout << "\n*********TESTING EXECUTING FORMS ************";
	std::cout << "\n******************************************\n"
			  << std::endl;
	std::cout << "\033[0m";

	try
	{
		shrubbery->execute(bob);
		
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	
	try
	{
		pp->execute(bob);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	try
	{
		rrf->execute(bob);
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR: " << e.what() << std::endl;
	}

	delete rrf;
	delete pp;
	delete shrubbery;

	return (0);
}