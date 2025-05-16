#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
  std::cout << "[Ice] Constructor Called" << std::endl;
}
Ice::Ice(const Ice &other) : AMateria(other) {
  std::cout << "[Ice] Copy Constructor Called" << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
  if (this != &other) {
    AMateria::operator=(other);
    std::cout << "[Ice] Copy Assingment operator Called" << std::endl;
  }
  return (*this);
}

Ice::~Ice() { std::cout << "[Ice] Destructor Called" << std::endl; }

void Ice::use(ICharacter &target) {
  std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}

AMateria *Ice::clone() const {
  AMateria *clone = new Ice();
  std::cout << "[Ice] Materia cloned" << std::endl;
  return (clone);
}
