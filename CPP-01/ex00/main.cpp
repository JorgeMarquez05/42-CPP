#include "Zombie.hpp"

int main(void) {
  Zombie z("Joel");
  z.announce();

  randomChump("Rick");

  Zombie *zombie = newZombie("Daryl");
  zombie->announce();
  delete zombie;

  return (0);
}