#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

void RPN::addNumber(int nbr)
{
	_numbers.push(nbr);
}
void RPN::addOperator(char validOperator)
{
	_operators.push(validOperator);
}
void RPN::makeOperation()
{
	if (_operators.empty() || _numbers.size() < 2)
		return;
	if (_operators.top() == '+')
		makeSum();
	if (_operators.top() == '-')
		makeSubtracion();
	if (_operators.top() == '/')
		makeDivision();
	if (_operators.top() == '*')
		makeMultiplication();

	_operators.pop();
}

void RPN::makeSum()
{
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	int finalNbr = nbr2 + nbr1;
	std::cout << "Operation: " << nbr2 << " + " << nbr1 << std::endl;
	_numbers.push(finalNbr);
}
void RPN::makeMultiplication()
{
    int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();
    
	int finalNbr = nbr2 * nbr1;
    std::cout << "Operation: " << nbr2 << " * " << nbr1 << std::endl;
	_numbers.push(finalNbr);
}
void RPN::makeDivision()
{
    int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();
    
	int finalNbr = nbr2 / nbr1;
    std::cout << "Operation: " << nbr2 << " / " << nbr1 << std::endl;
	_numbers.push(finalNbr);
}
void RPN::makeSubtracion()
{
    int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();
    
	int finalNbr = nbr2 - nbr1;
    std::cout << "Operation: " << nbr2 << " - " << nbr1 << std::endl;
	_numbers.push(finalNbr);
}

int RPN::finalResult()
{
	while (_numbers.size() != 1 && !_operators.empty())
	{
		makeOperation();
	}
	if (_numbers.size() != 1)
	{
		std::cout << "Error " << std::endl;
		return (-1);
	}
	return (_numbers.top());
}