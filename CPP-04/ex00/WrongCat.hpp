#pragma once
#include "Animal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	~WrongCat();
	void makeSound()const;
};
