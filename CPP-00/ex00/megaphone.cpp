#include <iostream>

int main(int argc, char *argv[]) {
  int i;
  int j;

  i = 1;
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
  }
  while (i < argc) {
    j = 0;
    while (argv[i][j]) {
      std::cout << (char)std::toupper(argv[i][j]);
      j++;
    }
    i++;
    if (i != argc)
      std::cout << " ";
  }
  std::cout << std::endl;
  return (0);
}
