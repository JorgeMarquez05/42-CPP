#include "Character.hpp"

Character::Character() : _name("Default"), slots_used(0), saved_materias(4) {
  floor = new AMateria *[saved_materias];
  for (int i = 0; i < 4; i++) {
    inventory[i] = NULL;
    floor[i] = NULL;
  }
  std::cout << "[Character] Default Constructor called" << std::endl;
}
Character::Character(std::string n)
    : _name(n), slots_used(0), saved_materias(4) {
  floor = new AMateria *[saved_materias];
  for (int i = 0; i < 4; i++) {
    inventory[i] = NULL;
    floor[i] = NULL;
  }
  std::cout << "[Character] Constructor called" << std::endl;
}
Character::Character(const Character &other)
    : _name(other._name), slots_used(other.slots_used),
      saved_materias(other.saved_materias) {
  floor = new AMateria *[saved_materias];
  for (int i = 0; i < saved_materias; i++) {
    if (other.floor[i])
      floor[i] = other.floor[i]->clone();
    else
      floor[i] = NULL;
  }
  for (int i = 0; i < 4; i++) {
    if (other.inventory[i])
      inventory[i] = other.inventory[i]->clone();
    else
      inventory[i] = NULL;
  }
  std::cout << "[Character] copy constructor called" << std::endl;
}
Character &Character::operator=(const Character &other) {
  if (this != &other) {
    this->_name = other._name;
    this->slots_used = other.slots_used;

    for (int i = 0; i < 4; i++) {
      delete inventory[i];
      if (other.inventory[i])
        inventory[i] = other.inventory[i]->clone();
      else
        inventory[i] = NULL;
    }
    for (int j = 0; j < saved_materias; j++) {
      if (floor[j])
        delete floor[j];
    }
    delete[] floor;
    this->saved_materias = other.saved_materias;
    floor = new AMateria *[saved_materias];
    for (int k = 0; k < saved_materias; k++) {
      if (other.floor[k])
        floor[k] = other.floor[k]->clone();
      else
        floor[k] = NULL;
    }
  }
  std::cout << "[Character] Copy assignment operator called" << std::endl;
  return (*this);
}

std::string const &Character::getName() const { return (this->_name); }

void Character::equip(AMateria *m) {
  int i = 0;
  if (slots_used == 4) {
    std::cout << "[Character] Inventory of Materias already full" << std::endl;
    return;
  }
  while (i < 4 && inventory[i])
    i++;
  for (int j = 0; j < 4; j++) {
    if (inventory[j] && m == inventory[j]) {
      std::cout << "[Character] Materia is already in inventory " << std::endl;
      return;
    }
  }
  inventory[i] = m;
  std::cout << "[Character]" << _name << " equip Materia " << m->getType()
            << std::endl;
  slots_used++;
}
void Character::expand_floor() {
  int new_size = saved_materias + 4;
  AMateria **new_floor = new AMateria *[new_size];

  for (int i = 0; i < new_size; i++) {
    if (i < saved_materias)
      new_floor[i] = floor[i];
    else
      new_floor[i] = NULL;
  }
  delete[] floor;
  floor = new_floor;
  saved_materias = new_size;
}

void Character::unequip(int idx) {
  int i = 0;
  if (idx < 0 || idx >= 4 || !inventory[idx] || slots_used == 0) {
    std::cout << "[Character] Materia in that index doesn't exit" << std::endl;
    return;
  }
  while (i < saved_materias && floor[i])
    i++;
  for (int j = 0; j < 4; j++) {
    if (floor[j] && inventory[idx] == floor[j]) {
      std::cout << "[Character] Materia already on the floor" << std::endl;
      return;
    }
  }
  if (i == saved_materias)
    expand_floor();
  floor[i] = inventory[idx];
  inventory[idx] = NULL;
  slots_used--;
  slots_used = (slots_used < 0) ? 0 : slots_used;
}

void Character::use(int idx, ICharacter &target) {
  if (idx < 0 || idx >= 4 || !inventory[idx]) {
    std::cout << "[Character] Materia in that index doesn't exit" << std::endl;
    return;
  }
  std::cout << "[Character] " << getName() << " use ";
  inventory[idx]->use(target);
}

Character::~Character() {
  for (int i = 0; i < 4; i++) {
    if (inventory[i] != NULL) {
      delete inventory[i];
      inventory[i] = NULL;
    }
  }

  if (floor != NULL) {
    for (int i = 0; i < saved_materias; i++) {
      if (floor[i] != NULL) {
        delete floor[i];
        floor[i] = NULL;
      }
    }
    delete[] floor;
  }

  std::cout << "[Character] Destructor called" << std::endl;
}