#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _signed(false), _gradeToSign(50), _gradeToExecute(25)
{
}
AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute)
    : _name(name), _signed(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_execute)
{
	if (_gradeToSign < HIGHER_GRADE || _gradeToExecute < HIGHER_GRADE)
		throw AForm::GradeTooHighException();
	else if (_gradeToSign > LOWER_GRADE || _gradeToExecute > LOWER_GRADE)
		throw AForm::GradeTooLowException();
	std::cout << "AForm Constructor Called" << std::endl;
}
std::string AForm::getName() const
{
	return (_name);
}

bool AForm::isSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &object)
    : _name(object.getName()), _signed(object.isSigned()), _gradeToSign(object.getGradeToSign()),
      _gradeToExecute(object.getGradeToExecute())
{
}
AForm &AForm::operator=(const AForm &object)
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

void AForm::execute(const Bureaucrat &executor) const
{
	if (!isSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	executeAction();
}

AForm::~AForm()
{
}

std::ostream &operator<<(std::ostream &os, const AForm &object)
{
	os << "Form: Name: " << object.getName();
	os << ", State: " << (object.isSigned() ? "Signed" : "Unsigned");
	os << ", Grade To Sign: " << object.getGradeToSign();
	os << ", Grade To Execute: " << object.getGradeToExecute() << std::endl;
	return (os);
}