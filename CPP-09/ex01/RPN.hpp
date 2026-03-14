#pragma once
#include <exception>
#include <iostream>
#include <sstream>
#include <stack>

class RPN {
  private:
	std::stack<int> _numbers;
	void makeSum();
	void makeMultiplication();
	bool makeDivision();
	void makeSubtraction();
	void addNumber(int nbr);
	bool makeOperation(char validOperator);
	bool isOperator(char parameter);
	RPN(const RPN &other);
	RPN &operator=(const RPN &other);

  public:
	RPN();
	void calculate(std::string arguments);
	~RPN();
};
