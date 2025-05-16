#ifndef phonebook_hpp
#define phonebook_hpp
#include "Contact.hpp"
#define MAX_CONTACTS 8

class PhoneBook {
private:
  Contact contacts[MAX_CONTACTS];
  int index;
  int contact_count;

public:
  PhoneBook();
  ~PhoneBook(){};
  void add_contact(std::string first_name, std::string last_name,
                   std::string nickname, std::string darkest_secret,
                   std::string phone_number);
  void display_contact_table();
  void search_contact(int index);
};

#endif