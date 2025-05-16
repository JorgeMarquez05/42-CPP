#include "Harl.hpp"

int main(void) {
  Harl c;

  c.complain("DEBUG");
  c.complain("INFO");
  c.complain("WARNING");
  c.complain("ERROR");
  c.complain("INVALID");
}
