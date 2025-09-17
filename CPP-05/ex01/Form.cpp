#include "Form.hpp"

Form::Form() : _name("Form"), _signed(false), _grade_to_sign(50), _grade_to_execute(25)
{
}
Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
    if (_grade_to_sign < HIGHER_GRADE || _grade_to_execute < HIGHER_GRADE)
        throw Form::GradeTooHighException();
    else if (_grade_to_sign > LOWER_GRADE || _grade_to_execute > LOWER_GRADE)
        throw Form::GradeTooLowException();
    std::cout << "Form Constructor Called" << std::endl;
}
std::string Form::getName() const
{
    return (_name);
}

std::string Form::isSigned() const
{
    if (_signed)
        return ("Signed");
    else
        return ("Unsigned");
}

int Form::getGradeToSign() const
{
    return (_grade_to_sign);
}

int Form::getGradeToExecute() const
{
    return (_grade_to_execute);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= getGradeToSign())
    _signed = true;
}

Form::~Form()
{
}

std::ostream &operator<<(std::ostream &os, Form &object)
{
    os << "Form Name: " << object.getName() << std::endl;
    os << "Form State: " << object.isSigned() << std::endl;
    os << "Form Grade To Sign: " << object.getGradeToSign() << std::endl;
    os << "Form Grade To Execute: " << object.getGradeToExecute() << std::endl;
    return (os);
}