#include "Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &other)
{
	(void)other;
}
Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

AForm *makeForm(std::string const &formName, std::string &target)
{
	(void)formName;
	(void)target;
	return (NULL);
}
