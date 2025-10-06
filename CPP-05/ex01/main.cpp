#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstring>
#include <iostream>


static void testConstructor()
{
	std::cout << "\n*********TESTING CONSTRUCTOR EXCEPTIONS**********\n" << std::endl;
	try {
		Form form1("form1", 10, 190);
	} catch (std::exception &e) {
		std::cout << "form1 -> Error: " << e.what() << std::endl;
	}

	try {
		Form form2("form2", 10, 0);
	} catch (std::exception &e) {
		std::cout << "form2 -> Error: " << e.what() << std::endl;
	}

	try {
		Form form3("form3", 190, 10);
	} catch (std::exception &e) {
		std::cout << "form3 -> Error: " << e.what() << std::endl;
	}

	try {
		Form form4("form4", 0, 100);
	} catch (std::exception &e) {
		std::cout << "form4 -> Error: " << e.what() << std::endl;
	}
}

static void testInvalidSing()
{


	std::cout << "\n***************** TESTING INVALID SING EXCEPTIONS**********\n" << std::endl;
	try {
		Bureaucrat bob("Bob", 10);
		Form form("form1", 1, 120);
		bob.signForm(form);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n*********TESTING INVALID SING EXCEPTIONS**********\n" << std::endl;
	try {
		Bureaucrat bob("Bob", 10);
		Form form("form2", 10, 120);
		bob.decreaseGrade();
		bob.signForm(form);
		bob.increaseGrade();
		bob.increaseGrade();
		bob.signForm(form);
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

}


int main()
{
	testConstructor();

	testInvalidSing();

		std::cout << "\n*********TESTING CASE, THAT SIGN**********\n" << std::endl;
	try {
		Bureaucrat corrupt("Corrupt", 10);
		Form form("Tax Evasion", 10,120);
		corrupt.signForm(form);
	} catch (std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}