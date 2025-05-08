#include <iostream>

// !Learning POO and  constructors

// class Employee
// {
//   private:
// 	int salary;

//   public:
// 	void setSalary(int s);
// 	int getSalary();
// };

// void Employee::setSalary(int s)
// {
// 	salary = s;
// }
// int Employee::getSalary()
// {
// 	return (salary);
// }

// int	main(void)
// {
// 	Employee	Hugo;

// 	Hugo.setSalary(1);
// 	std::cout << Hugo.getSalary();
// 	return (0);
// }

// class MyClass
// {
//   public:
// 	// MyClass(int x, std::string y)
// 	// {
// 	// 	myNum = x;
// 	// 	myString = y;
// 	// }

//     MyClass(int x, std::string y) : myNum(x), myString(y) {
//         std::cout << "Constructor called!" << std::endl;
//     }
//     ~MyClass();
// 	void myMethod();

//   private:
// 	int y;
//     std::string myString;
// 	int myNum;

// };

// MyClass::~MyClass() {
//     std::
// };
// void MyClass::myMethod()
// {
// 	std::cout << myNum << std::endl;
// 	std::cout << myString << std::endl;
// }

// int	main(void)
// {
// 	MyClass myObj(20, "HElloW");
// 	MyClass myObj2(55, "World");
// 	myObj.myMethod();
// 	myObj2.myMethod();
// 	// std::cout << myObj.myString;
// 	return (0);
// }
// class MyClass
// {
//   public:
// 	int myNum;
// 	static int staticint;
// 	std::string myString;
// 	void myMethod();
// };

// int MyClass::staticint = 30;

// void MyClass::myMethod()
// {
// 	std::cout << myString << std::endl;
// 	std::cout << staticint << std::endl;
// }

// int	main(void)
// {
// 	MyClass	myObj;

// 	myObj.myNum = 15;
// 	myObj.myString = "Hello 2World";
// 	std::cout << myObj.myNum << "\n";
// 	myObj.myMethod();
// 	// std::cout << myObj.myString;
// 	return (0);
// }

// #include <iostream>

// class MyClass
// {
//   public:
// 	int myNum;
// 	std::string myString;
// 	void myMethod()
// 	{
// 		std::cout << myString << std::endl;
// 	}
// };

// int	main(void)
// {
// 	MyClass myObj;

// 	myObj.myNum = 15;
// 	myObj.myString = "Hello World";

// 	std::cout << myObj.myNum << "\n";
// 	myObj.myMethod();
// 	// std::cout << myObj.myString;
// 	return (0);
// }