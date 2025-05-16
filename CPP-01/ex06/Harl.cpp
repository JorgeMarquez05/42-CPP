#include "Harl.hpp"

Harl::Harl() {}

void Harl::debug(void) {
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
      << std::endl;
}
void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. ";
  std::cout << "You didn’t put enough bacon in my burger! ";
  std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void) {
  std::cout << "I think I deserve to have some extra bacon for free. ";
  std::cout << "I’ve been coming for years, ";
  std::cout << "whereas you started working here just last month." << std::endl;
}
void Harl::error(void) {
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}
void Harl::complain(std::string level) {
  std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning,
                             &Harl::error};
  for (int i = 0; i < 4; i++) {
    if (level == lvls[i]) {
      (this->*funcs[i])();
      return;
    }
  }
  std::cerr << "Invalid level" << std::endl;
}

Harl::~Harl() {}

// void debug() { std::cout << "Debug\n"; }

// void (*func[])() = { &debug }; // ✅ punteros a funciones normales
// func[0](); // llama a debug