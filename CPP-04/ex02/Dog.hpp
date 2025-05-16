#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
  Brain *brain;

public:
  Dog();
  Dog(const Dog &other);
  Dog(const std::string type);
  Dog &operator=(const Dog &other);
  ~Dog();
  void makeSound() const;
  Brain *getBrain() const;
  std::string getIdea(int idx) const;
};
