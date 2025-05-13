#pragma once
#include <iostream>

// class Animal
// {
//   protected:
// 	Animal();
// 	Animal(std::string type);
// 	Animal(const Animal &other);
// 	Animal &operator=(const Animal &other);

//   public:
// 	std::string _type;
// 	virtual ~Animal();
// 	std::string getType() const;
// 	virtual void makeSound() const = 0;
// };

class Animal
{
  protected:
  public:
	std::string _type;
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const = 0;
};
