#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat();
	~Cat();
	void makeSound()const;
};

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Miau Miau" << std::endl;   
}
