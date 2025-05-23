
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap") {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap deafult created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap " << name << " created" << std::endl;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap " << name << " copied" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << name << " assigned" << std::endl;
  }
  return (*this);
}
FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys() {
  if (hitPoints == 0) {
    std::cout << "FragTrap " << name
              << " has no hit points and cannot request a high five."
              << std::endl;
    return;
  }
  std::cout << "FragTrap " << name << " says: High five, guys!" << std::endl;
}
