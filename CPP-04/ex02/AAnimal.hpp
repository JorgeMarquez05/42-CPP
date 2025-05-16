#pragma once
#include <iostream>

// class AAnimal
// {
//   protected:
// 	AAnimal();
// 	AAnimal(std::string type);
// 	AAnimal(const AAnimal &other);
// 	AAnimal &operator=(const AAnimal &other);

//   public:
// 	std::string _type;
// 	virtual ~AAnimal();
// 	std::string getType() const;
// 	virtual void makeSound() const = 0;
// };

class AAnimal {
protected:
public:
  std::string _type;
  AAnimal();
  AAnimal(std::string type);
  AAnimal(const AAnimal &other);
  AAnimal &operator=(const AAnimal &other);
  virtual ~AAnimal();
  std::string getType() const;
  virtual void makeSound() const = 0;
  virtual std::string getIdea(int idx) const = 0;
};
