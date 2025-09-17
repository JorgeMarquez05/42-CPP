#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < HIGHER_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > LOWER_GRADE)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &object) : _name(object.getName()), _grade(object.getGrade())
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object)
{
	if (this != &object)
	{
		// this->_name = object.getName(); // !Cannot Do this its a const value
		this->_grade = object.getGrade();
	}
	std::cout << "Bureaucrat Copy Assingment Operator Called" << std::endl;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::increaseGrade()
{
	if (_grade <= HIGHER_GRADE)
	throw Bureaucrat::GradeTooHighException();
	_grade--;
}
void Bureaucrat::decreaseGrade()
{
	if (_grade > LOWER_GRADE)
	throw Bureaucrat::GradeTooLowException();
	_grade++;
}

Bureaucrat::~Bureaucrat()
{
}
std::ostream &operator<<(std::ostream &os, Bureaucrat &object)
{
	os << object.getName() << ", bureaucrat grade " << object.getGrade() << ".";
	return (os);
}

// Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException