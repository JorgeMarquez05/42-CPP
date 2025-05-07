#pragma once 

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    void makeSound()const;
};

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl; 
}

Dog::~Dog()
{
    std::cout << "Dog destructot called" << std::endl; 

}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}