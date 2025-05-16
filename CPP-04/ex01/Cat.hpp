#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
  Brain *brain;

public:
  Cat();
  ~Cat();
  Cat(const Cat &other);
  Cat(const std::string type);
  Cat &operator=(const Cat &other);
  void makeSound() const;
  Brain &getBrain() const;
  std::string getIdea(int idx) const;
};
