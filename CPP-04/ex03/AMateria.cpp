#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {
  std::cout << "[AMateria] Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
  std::cout << "[AMateria] Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : _type(other._type) {
  std::cout << "[AMateria] Copy Constructor called" << std::endl;
}
AMateria &AMateria::operator=(const AMateria &other) {
  if (this != &other) {
    _type = other._type;
  }
  std::cout << "[AMateria] Copy Assingment operator Called" << std::endl;
  return (*this);
}

std::string const &AMateria::getType() const { return (_type); }

void AMateria::use(ICharacter &target) {
  std::cout << "[AMateria] default use " << target.getName() << std::endl;
}

AMateria::~AMateria() {
  std::cout << "[AMateria] Destructor called" << std::endl;
}