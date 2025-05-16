#pragma once
#include <iostream>

class WrongAnimal {
protected:
  std::string _type;

public:
  WrongAnimal();
  WrongAnimal(std::string type);
  virtual ~WrongAnimal();
  std::string getType() const;
  void makeSound() const;
};
