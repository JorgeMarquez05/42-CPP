#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "Cat constructor called" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "Cat destructor called" << std::endl; }

void WrongCat::makeSound() const { std::cout << "Miau Miau" << std::endl; }
