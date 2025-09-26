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