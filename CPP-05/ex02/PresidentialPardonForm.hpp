#pragma once
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
  private:
	std::string _target;

  public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &object);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &object);
	~PresidentialPardonForm();
	
	std::string getTarget()const;
	void executeAction() const;
};
