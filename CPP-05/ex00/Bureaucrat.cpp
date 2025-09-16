#include <iostream>

class Bureacrat
{
private:
    std::string _name;
    int _grade;
public:
    Bureacrat();
    Bureacrat(std::string name);
    std::string getName();
    int getGrade();
    ~Bureacrat();
};

Bureacrat::Bureacrat() 
{
    _name = "Deafult";
    std::cout << "Bureacrat Default Constructor Called" << std::endl;
}
Bureacrat::Bureacrat(std::string name) : _name(name)
{
    std::cout << "Bureacrat Constructor Called" << std::endl;
}

std::string Bureacrat::getName()
{

}
int Bureacrat::getGrade()
{

}

Bureacrat::~Bureacrat()
{
}
