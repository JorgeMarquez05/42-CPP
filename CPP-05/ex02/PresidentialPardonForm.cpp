#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("DFL_target")
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object)
    : AForm(object), _target(object._target)
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	if (this != &object)
	{
		AForm::operator=(object);
		_target = object._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void PresidentialPardonForm::executeAction() const
{
	std::cout << _target << " has been pardoned by Mr. President Zaphod Beeblebrox." << std::endl;
}
