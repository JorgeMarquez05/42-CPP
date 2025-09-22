#pragma once
#include "AForm.hpp"
#include <iostream>

class AForm;

#define LOWER_GRADE 150
#define HIGHER_GRADE 1

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;
	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException(){};
		const char *what() const throw()
		{
			return "Grade is too High";
		};
		~GradeTooHighException() throw(){};
	};
	class GradeTooLowException : public std::exception
	{
	  public:
		GradeTooLowException(){};
		const char *what() const throw()
		{
			return "Grade is too Low";
			;
		};
		~GradeTooLowException() throw(){};
	};

	Bureaucrat(const Bureaucrat &object);
	Bureaucrat &operator=(const Bureaucrat &object);

  public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	std::string getName() const;
	int getGrade() const;
	void increaseGrade();
	void decreaseGrade();
	void signForm(AForm &form);

	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &object);
