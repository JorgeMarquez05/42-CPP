#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("SOMEEE other type of club");
  std::cout << club.getType() << std::endl;
  bob.attack();

  std::cout << std::endl;
  std::cout << std::endl;

  Weapon club2 = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(club2);
  jim.attack();
  club2.setType("some other type of club");
  jim.attack();

  return (0);
}