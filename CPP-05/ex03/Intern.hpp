#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cctype>
#include <sstream>
#include <string>

class Intern
{
private:
	class CannotCreateFormException : public std::exception
	{
	public:
		CannotCreateFormException() {};
		const char *what() const throw()
		{
			return ("Cannot Create a Form");
		}
		~CannotCreateFormException() throw() {};
	};

public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();

	AForm *makeForm(std::string const &formName, std::string target);
};

enum validForms
{
	presidential,
	robotomy,
	shrubbery
};