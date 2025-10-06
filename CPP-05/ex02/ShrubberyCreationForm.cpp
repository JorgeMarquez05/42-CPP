#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("DFL target")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object)
	: AForm(object), _target(object._target)
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object)
{
	if (this != &object)
	{
		AForm::operator=(object);
		_target = object._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

std::string ShrubberyCreationForm::getTarget() const
{
	return(_target);
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream outfile((_target + "_shrubbery").c_str());
	if (!outfile)
		throw std::runtime_error("Could not open file");

	outfile << "       ,.,\n"
			   "      MMMM_    ,..,\n"
			   "        \"_ \"__\"MMMMM          ,...,,\n"
			   " ,..., __.\" --\"    ,.,     _-\"MMMMMMM\n"
			   "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\n"
			   " \"\"\"\"\"    \"\" , \\_.   \"_. .\"\n"
			   "        ,., _\"__ \\__./ .\"\n"
			   "       MMMMM_\"  \"_    ./\n"
			   "        ''''      (    )\n"
			   "  ._______________.-'____\"---._.\n"
			   "  \\                          /\n"
			   "   \\________________________/\n"
			   "   (_)                    (_)\n";

	outfile.close();
	std::cout << "Shrubbery created at " << _target + "_shrubbery" << std::endl;
}