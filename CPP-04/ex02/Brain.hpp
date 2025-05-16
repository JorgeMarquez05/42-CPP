#pragma once
#include <iostream>

class Brain {
private:
  std::string ideas[100];

public:
  Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &other);
  ~Brain();
  void set_idea_idx(int idx, std::string idea);
  void set_all_ideas(std::string idea);

  std::string get_idea(int index) const;
};
