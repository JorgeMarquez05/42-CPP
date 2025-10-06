#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("DFL_target")
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object) : AForm(object), _target(object._target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	if (this != &object)
	{
		AForm::operator=(object);
		_target = object._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void RobotomyRequestForm::executeAction() const
{
	std::srand(time(0));

	int nbr = std::rand() % 10;

	if (nbr % 2)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "ERROR: " << _target << " could not be robotomized" << std::endl;
}
