#include "Form.hpp"

Form::Form() : _name("Form"), _signed(false), _gradeToSign(50), _gradeToExecute(25)
{
}
Form::Form(std::string name, int grade_to_sign, int grade_to_execute)
    : _name(name), _signed(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_execute)
{
	if (_gradeToSign < HIGHER_GRADE || _gradeToExecute < HIGHER_GRADE)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > LOWER_GRADE || _gradeToExecute > LOWER_GRADE)
		throw Form::GradeTooLowException();
	std::cout << "Form Constructor Called" << std::endl;
}
std::string Form::getName() const
{
	return (_name);
}

bool Form::isSigned() const
{
	return(_signed);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

Form::Form(const Form &object)
    : _name(object.getName()), _signed(isSigned()), _gradeToSign(object.getGradeToSign()),
      _gradeToExecute(object.getGradeToExecute())
{
}
Form &Form::operator=(const Form &object)
{
	if (this != &object)
	{
		_signed = object.isSigned();
		// ! Cannot set values out contructor to const values
		// _name = object.getName();
		// _gradeToSign = object.getGradeToSign();
		// _gradeToExecute = object.getGradeToExecute();
	}
	return (*this);
}

Form::~Form()
{
}

std::ostream &operator<<(std::ostream &os, Form &object)
{
	os << "Form: Name: " << object.getName();
	os << ", State: " << (object.isSigned() ? "Signed" : "Unsigned");
	os << ", Grade To Sign: " << object.getGradeToSign();
	os << ", Grade To Execute: " << object.getGradeToExecute() << std::endl;
	return (os);
}