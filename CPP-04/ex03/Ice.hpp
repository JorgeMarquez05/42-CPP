#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {

public:
  Ice();
  Ice(const Ice &other);
  Ice &operator=(const Ice &other);
  ~Ice();
  void use(ICharacter &target);
  AMateria *clone() const;
};
