#include "Zombie.hpp"

Zombie::Zombie(std::string name) { this->name = name; }

void Zombie::announce(void) {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) { this->name = name; }