#pragma once

#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog &other);
  Dog(const std::string type);
  Dog &operator=(const Dog &other);
  ~Dog();
  void makeSound() const;
};
