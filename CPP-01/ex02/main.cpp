#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << "Address str : " << &str << std::endl;
  std::cout << "Address PTR : " << stringPTR << std::endl;
  std::cout << "Address REF : " << &stringREF << std::endl;
  std::cout << std::endl;

  std::cout << "Value str : " << str << std::endl;
  std::cout << "Value REF : " << stringREF << std::endl;
  std::cout << "Value PTR : " << *stringPTR << std::endl;
}