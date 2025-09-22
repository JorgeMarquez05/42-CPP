#pragma once
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
  private:
	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;

	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException(){};
		const char *what() const throw()
		{
			return ("Grade Too High");
		}
		~GradeTooHighException() throw(){};
	};
	class GradeTooLowException : public std::exception
	{
	  public:
		GradeTooLowException(){};
		const char *what() const throw()
		{
			return ("Grade Too Low");
		}
		~GradeTooLowException() throw(){};
	};
	class FormNotSignedException : public std::exception
	{
	  public:
		FormNotSignedException(){};
		const char *what() const throw()
		{
			return ("Form isn't signed");
		}
		~FormNotSignedException() throw(){};
	};

  public:
  
  std::string getName() const;
  bool isSigned() const;
  int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);
	void execute(const Bureaucrat &executor) const;
	virtual ~AForm();
	
	protected:
	AForm();
	AForm(std::string name, int grade_to_sign, int grade_to_execute);
	AForm(const AForm &object);
	AForm &operator=(const AForm &object);
	virtual void executeAction() const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &object);
