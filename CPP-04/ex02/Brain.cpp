#include "Brain.hpp"

Brain::Brain() {
  set_all_ideas("default idea");
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
  for (int idx = 0; idx < 100; idx++)
    set_idea_idx(idx, other.ideas[idx]);
  std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
  if (this != &other) {
    for (int idx = 0; idx < 100; idx++)
      set_idea_idx(idx, other.ideas[idx]);
  }
  std::cout << "Brain copy assignment constructor called" << std::endl;
  return (*this);
}

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

void Brain::set_idea_idx(int idx, std::string idea) {
  if (idx < 0 || idx > 99) {
    std::cout << "Thats is not a valid index to set an idea" << std::endl;
    return;
  }
  this->ideas[idx] = idea;
}

void Brain::set_all_ideas(std::string idea) {
  for (int idx = 0; idx < 100; idx++)
    ideas[idx] = idea;
}

std::string Brain::get_idea(int idx) const {
  if (idx < 0 || idx > 99) {
    std::cout << "Thats is not a valid index to get an idea" << std::endl;
    return ("");
  }
  return (ideas[idx]);
}