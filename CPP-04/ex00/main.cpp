#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  const WrongAnimal *wrong = new WrongAnimal();
  const WrongAnimal *k = new WrongCat();

  std::cout << std::endl << std::endl << std::endl << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();
  std::cout << std::endl << std::endl << std::endl << std::endl;
  std::cout << k->getType() << " " << std::endl;
  k->makeSound(); // will output the animal sound!
  wrong->makeSound();
  std::cout << std::endl << std::endl << std::endl << std::endl;
  delete meta;
  delete i;
  delete j;
  delete wrong;
  delete k;
  return (0);
}

// class Base {
// 	public:

// 		// Virtual function
// 		virtual void display() const {
// 			std::cout << "Base class function";
// 		}
// 	};

// 	class Derived : public Base {
// 	public:

// 		// Overriding the base class function
// 		void display(){
// 			std::cout << "Derived class function";
// 		}
// 	};

// 	int main() {

// 		// Creating a pointer of type Base
// 		Base* basePtr;

// 		// Creating an object of Derived class
// 		const Base baseObj;
// 		Derived derivedObj;
// 		std::cout << std::endl;
// 		// basePtr = &baseObj;
// 		// Pointing base class pointer to
// 		baseObj.display();
// 		// basePtr->display();
// 		// derived class object
// 		basePtr = &derivedObj;

// 		// Calling the display function
// 		// using base class pointer
// 		basePtr->display();
// 	//Driver Code Starts{
// 		return (0);
// 	}
// 	//Driver Code Ends }