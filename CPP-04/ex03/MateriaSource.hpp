#pragma once
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
class MateriaSource : public IMateriaSource {
private:
  AMateria *inventory[4];

public:
  MateriaSource();
  MateriaSource(const MateriaSource &other);
  MateriaSource &operator=(const MateriaSource &other);
  ~MateriaSource();
  void learnMateria(AMateria *m);
  AMateria *createMateria(std::string const &type);
};
