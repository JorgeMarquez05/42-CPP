#pragma once
#include <iostream>
#include <stack>

class RPN
{
  private:
	std::stack<int> _numbers;
	std::stack<char> _operators;
	void makeSum();
	void makeMultiplication();
	int makeDivision();
	void makeSubtracion();

  public:
	RPN();
	void addNumber(int nbr);
	void addOperator(char ValidOperator);
	void makeOperation();
    int  finalResult();
	~RPN();
};
