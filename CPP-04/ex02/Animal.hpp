#pragma once
#include <iostream>

class Animal
{
  protected:
	std::string _type;
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	
	public:
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};
