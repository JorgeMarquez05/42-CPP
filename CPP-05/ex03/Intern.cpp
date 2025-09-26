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

static std::string wordToLowerCase(const std::string word)
{
	std::string lower = word;

	for (size_t i = 0; i < lower.size(); ++i)
		lower[i] = std::tolower(lower[i]);

	return (lower);
}
static int validForms(const std::string word)
{
	std::string forms[] = {"presidential", "robotomy", "shrubbery"};
	size_t n = sizeof(forms) / sizeof(forms[0]);
	for (size_t i = 0; i < n; ++i)
	{
		if (word.compare(forms[i]) == 0)
		{
			std::cout << forms[i] << std::endl; // ! Debug
			return (i);
		}
	}
	return (-1);
}
static AForm *newForm(const int formNbr, std::string target)
{
	switch (formNbr)
	{
	case presidential:
		return (new PresidentialPardonForm(target));
	case robotomy:
		return (new RobotomyRequestForm(target));
	case shrubbery:
		return (new ShrubberyCreationForm(target));

	default:
		return (NULL);
	}
}

AForm *Intern::makeForm(std::string const &formName, std::string target)
{
	std::istringstream input(formName);

	std::string word1, word2;
	input >> word1 >> word2;

	if (input.fail() || !input.eof())
		std::cout << "Invalid Format: Expected 2 words";

	word1 = wordToLowerCase(word1);
	word2 = wordToLowerCase(word2);

	int formNbr = validForms(word1);

	if (word2 != "request" || formNbr == -1)
		std::cout << "Invalid Name of request, doesn't exist" << std::endl;

	return (newForm(formNbr, target));
}
