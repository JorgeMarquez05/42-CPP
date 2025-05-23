#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string n);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
  ~ScavTrap();
  void guardGate();
  void attack(const std::string &target);
};
