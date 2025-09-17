#pragma once
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _grade_to_sign;
	const int _grade_to_execute;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() {};
		const char *what() const throw()
		{
			return ("Grade Too High");
		}
		~GradeTooHighException() throw() {};
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() {};
		const char *what() const throw()
		{
			return ("Grade Too Low");
		}
		~GradeTooLowException() throw() {};
	};

public:
	Form();
	Form(std::string name, int grade_to_sign, int grade_to_execute);
	std::string getName() const;
	std::string isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);
	~Form();
};

std::ostream &operator<<(std::ostream &os, Form &object);
