#include <iostream>

//! Access Specifiers

class Employee {
protected:
  int salary;
};
class Programmer : public Employee {
public:
  int bonus;
  void setSalary(int s);
  int getSalary();
};

void Programmer::setSalary(int s) { salary = s; }

int Programmer::getSalary() { return (salary); }

int main(void) {
  Programmer myObj;

  myObj.setSalary(1000);
  myObj.bonus = 1500;
  std::cout << "Salary " << myObj.getSalary() << std::endl;
  std::cout << "Bonus " << myObj.bonus << std::endl;
}

// !Multiple Inheritance

// class MyClass
// {
//   public:
// 	void myFunction()
// 	{
// 		std::cout << "Some content in MyClass" << std::endl;
// 	}
// };

// class MyOtherClass
// {
//   public:
// 	void myOtherFunction()
// 	{
// 		std::cout << "Some content in MyOtherClass" << std::endl;
// 	}
// };

// class MyChildClass : public MyClass, public MyOtherClass
// {
// };

// int	main(void)
// {
// 	MyChildClass	myObj;

// 	myObj.myFunction();
// 	myObj.myOtherFunction();
// 	return (0);
// }

//! Multilevel Inheritance

// class MyClass
// {
//   public:
// 	void myFunction()
// 	{
// 		std::cout << "Some Content in parent class.";
// 	}
// };

// class MyChild : public MyClass
// {
// };

// class MyGrandChild : public MyChild
// {
// };

// int	main(void)
// {
// 	MyGrandChild	myObj;

// 	myObj.myFunction();
// 	return (0);
// }

//! Inheritance
// class Vehicle
// {
//   public:
// 	std::string brand;
// 	void honk()
// 	{
// 		std::cout << "Vrum vrum \n";
// 	}
// 	Vehicle(std::string str);
// };

// Vehicle::Vehicle(std::string str) : brand(str){};

// class Car : public Vehicle
// {
//   public:
// 	std::string model;
// 	Car(std::string b, std::string m);
// };

// Car::Car(std::string b, std::string m) : Vehicle(b), model(m){};

// int	main(void)
// {
// 	Car myCar("Ford", "Mustang");

// 	myCar.honk();

// 	std::cout << myCar.brand + " " + myCar.model;
// 	return (0);
// }
