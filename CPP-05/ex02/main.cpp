#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstring>
#include <iostream>

int main()
{

	std::cout << "\n*********CREATING FORMS AND BUREAUCRAT**********\n" << std::endl;

	ShrubberyCreationForm shrubbery("house");
	RobotomyRequestForm robot("human");
	PresidentialPardonForm pardon("human");

	Bureaucrat president("President", 1);
	Bureaucrat bob("Bob", 100);
	Bureaucrat worker("worker", 150);

	std::cout << "\033[31m";
	std::cout << "\n***************************************";
	std::cout << "\n*********TESTING SHRUBERRY*************";
	std::cout << "\n***************************************\n";
	std::cout << "\033[0m";

	std::cout << "\n*********TRY EXECUTE SHRUBERRY WITHOUT SIGNING**********\n" << std::endl;
	try
	{
		std::cout << "Form name: " << shrubbery.getName() << " | Target: " << shrubbery.getTarget()
		          << " | Sign grade: " << shrubbery.getGradeToSign()
		          << " | Execute grade: " << shrubbery.getGradeToExecute() << std::endl;
		shrubbery.execute(bob);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE SHRUBERRY WITHOUT ENOUGH GRADE**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{
		worker.signForm(shrubbery);
		shrubbery.execute(worker);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE SHRUBERRY**********\n" << std::endl;
	std::cout << "\033[0m";
	try
	{
		president.signForm(shrubbery);
		shrubbery.execute(president);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\033[31m";
	std::cout << "\n***************************************";
	std::cout << "\n*********TESTING ROBOT REQUEST*********";
	std::cout << "\n***************************************\n";
	std::cout << "\033[0m";
	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE ROBOT WITHOUT SIGNING**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{

		std::cout << "Form name: " << robot.getName() << " | Target: " << robot.getTarget()
		          << " | Sign grade: " << robot.getGradeToSign() << " | Execute grade: " << robot.getGradeToExecute()
		          << std::endl;
		robot.execute(bob);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE ROBOT WITHOUT ENOUGH GRADE**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{
		worker.signForm(robot);
		robot.execute(worker);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE ROBOT**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{
		president.signForm(robot);
		robot.execute(president);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\033[31m";
	std::cout << "\n**********************************************";
	std::cout << "\n*********TESTING PRESIDENTIAL PARDON**********";
	std::cout << "\n**********************************************\n";
	std::cout << "\033[0m";

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE PRESIDENTIAL PARDON WITHOUT SIGNING**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{

		std::cout << "Form name: " << pardon.getName() << " | Target: " << pardon.getTarget()
		          << " | Sign grade: " << pardon.getGradeToSign() << " | Execute grade: " << pardon.getGradeToExecute()
		          << std::endl;
		pardon.execute(bob);
	}
	catch (std::exception &msg)
	{
		std::cout << "Error: " << msg.what() << std::endl;
	}

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE PRESIDENTIAL PARDON**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{
		president.signForm(pardon);
		pardon.execute(president);
	}
	catch (std::exception &msg)
	{
		std::cout << "Error: " << msg.what() << std::endl;
	}

	std::cout << "\033[32m";
	std::cout << "\n*********TRY EXECUTE PRESIDENTIAL PARDON WITHOUT ENOUGH GRADE**********\n" << std::endl;
	std::cout << "\033[0m";

	try
	{
		worker.signForm(pardon);
		pardon.execute(worker);
	}
	catch (std::exception &msg)
	{
		std::cout << "Error: " << msg.what() << std::endl;
	}

	return (0);
};
