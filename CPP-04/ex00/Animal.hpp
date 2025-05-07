#pragma once
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(std::string type);
    ~Animal();
    std::string getType()const ;
    void makeSound()const ;
};

Animal::Animal() : _type("default")
{
    std::cout  << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) 
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
std::string Animal::getType() const
{
    return(this->_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal default sound" << std::endl;
}