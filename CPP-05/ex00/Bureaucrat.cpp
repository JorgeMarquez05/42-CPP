#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException("Too High");
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException("Too Low");
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &object) :_name(object.getName()), _grade(object.getGrade())
{
    std::cout << "Bureaucrat Copy Constructor Called" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object)
{
    if(this != &object)
    {
        //this->_name = object.getName(); // !Cannot Do this its a const value
        this->_grade = object.getGrade();
    }
    std::cout << "Bureaucrat Copy Assingment Operator Called" << std::endl;
    return(*this);
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
    _grade = _grade - 1;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException("Too High");
}
void Bureaucrat::decreaseGrade()
{
    _grade = _grade + 1;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException("Too Low");
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