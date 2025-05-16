#include "Zombie.hpp"

int main(void) {
  int N = 15;
  Zombie *horde;
  horde = zombieHorde(N, "Ze");
  for (int i = 0; i < N; i++)
    horde[i].announce();
  delete[] horde;
  return (0);
}