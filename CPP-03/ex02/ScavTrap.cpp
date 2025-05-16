#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrav") {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n) {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " created" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "ScavTrap " << name << " copied" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    std::cout << "ScavTrap " << name << " assigned!" << std::endl;
  }
  return (*this);
}
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

void ScavTrap::guardGate() {
  if (hitPoints == 0) {
    std::cout << "ScavTrap " << name
              << " has no hit points and cannot enter Gatekeeper mode."
              << std::endl;
    return;
  }
  std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!"
            << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (hitPoints == 0) {
    std::cout << "ScavTrap " << name << " has no health points" << std::endl;
    return;
  }
  if (energyPoints == 0) {
    std::cout << "ScavTrap " << name << " has no energy points" << std::endl;
    return;
  }
  std::cout << "ScavTrap " << name << " attacks " << target;
  std::cout << ", causing " << attackDamage << " points of damage!";
  std::cout << std::endl;
  energyPoints--;
}