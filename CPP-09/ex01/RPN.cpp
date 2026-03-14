#include "RPN.hpp"

RPN::RPN() {
}

RPN::~RPN() {
}

void RPN::addNumber(int nbr) {
	_numbers.push(nbr);
}

bool RPN::makeOperation(char validOperator) {
	if (_numbers.size() < 2)
		return true;
	if (validOperator == '+')
		makeSum();
	if (validOperator == '-')
		makeSubtraction();
	if (validOperator == '/')
		return (makeDivision());
	if (validOperator == '*')
		makeMultiplication();
	return (true);
}

void RPN::makeSum() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	int finalNbr = nbr2 + nbr1;
	_numbers.push(finalNbr);
}
void RPN::makeMultiplication() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	int finalNbr = nbr2 * nbr1;
	_numbers.push(finalNbr);
}
bool RPN::makeDivision() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	if (nbr1 == 0)
		return (false);

	int finalNbr = nbr2 / nbr1;
	_numbers.push(finalNbr);
	return (true);
}
void RPN::makeSubtraction() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	int finalNbr = nbr2 - nbr1;
	_numbers.push(finalNbr);
}

bool RPN::isOperator(char c) {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void RPN::calculate(std::string arguments) {

	std::stringstream expresion(arguments);
	std::string token;

	while (expresion >> token) {
		if (token.length() != 1) {
			std::cerr << "Error" << std::endl;
			return;
		}
		if (std::isdigit(token[0]))
			_numbers.push(token[0] - 48);
		else if (isOperator(token[0])) {
			if (!makeOperation(token[0])) {
				std::cerr << "Error" << std::endl;
				return;
			}
		} else {
			std::cerr << "Error" << std::endl;
			return;
		}
	}
	if (_numbers.size() == 1)
		std::cout << _numbers.top() << std::endl;
	else
		std::cerr << "Error" << std::endl;
}