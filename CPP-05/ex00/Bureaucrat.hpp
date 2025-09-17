#pragma once
#include <iostream>

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;
	class GradeTooHighException : public std::exception
	{
	  public:
		GradeTooHighException(std::string message) : _message(message){};
		const char *what() const throw()
		{
			return _message.c_str();
		};
		~GradeTooHighException() throw(){};

	  private:
		std::string _message;
	};
	class GradeTooLowException : public std::exception
	{
	  private:
		std::string _message;

	  public:
		GradeTooLowException(std::string message) : _message(message){};
		const char *what() const throw()
		{
			return _message.c_str();
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
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &object);
