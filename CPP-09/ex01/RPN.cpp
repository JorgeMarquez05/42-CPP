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
		return false;
	if (validOperator == '+')
		return (makeSum());
	if (validOperator == '-')
		return (makeSubtraction());
	if (validOperator == '/')
		return (makeDivision());
	if (validOperator == '*')
		return (makeMultiplication());
	return (true);
}

bool RPN::makeSum() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	long long res = static_cast<long long>(nbr2) + nbr1;
	if (res > 2147483647 || res < -2147483648)
		return (false);

	_numbers.push(static_cast<int>(res));
	return true;
}
bool RPN::makeMultiplication() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	long long res = static_cast<long long>(nbr2) * nbr1;
	if (res > 2147483647 || res < -2147483648)
		return (false);

	_numbers.push(static_cast<int>(res));
	return true;
}
bool RPN::makeDivision() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	if (nbr1 == 0)
		return (false);

	long long res = static_cast<long long>(nbr2) / nbr1;
	if (res > 2147483647 || res < -2147483648)
		return (false);

	_numbers.push(static_cast<int>(res));
	return (true);
}
bool RPN::makeSubtraction() {
	int nbr1 = _numbers.top();
	_numbers.pop();
	int nbr2 = _numbers.top();
	_numbers.pop();

	long long res = static_cast<long long>(nbr2) - nbr1;
	if (res > 2147483647 || res < -2147483648)
		return (false);

	_numbers.push(static_cast<int>(res));
	return true;
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