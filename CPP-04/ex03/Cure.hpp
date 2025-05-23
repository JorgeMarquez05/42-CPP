#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  Cure(const Cure &other);
  Cure &operator=(const Cure &other);
  ~Cure();
  void use(ICharacter &target);
  AMateria *clone() const;
};
