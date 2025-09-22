#pragma once
#include "AForm.hpp"
#include <iostream>
#include <cstdlib> 
#include <ctime> 

class RobotomyRequestForm : public AForm
{
  private:
	std::string _target;

  public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &object);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &object);
	~RobotomyRequestForm();

	void executeAction() const;
};

