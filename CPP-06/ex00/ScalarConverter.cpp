#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string input)
{
	if (!ScalarConverter::validateInput(input))
	{
		std::cout << "Not valid format, try on this formats [0; 0.0; 0.0f; \"'a'\"]";
		return;
	}
	if (ScalarConverter::isCharCase(input))
	{
		double nbr = static_cast<int>(input[1]);
		ScalarConverter::printTable(nbr);
		return;
	}
	if (ScalarConverter::isSpecialCases(input))
	{
		ScalarConverter::printSpecialCases(input);
		return;
	}

	double nbr = std::atof(input.c_str());
	ScalarConverter::printTable(nbr);
}

bool ScalarConverter::validateInput(std::string input)
{
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" ||
		input == "-inff" || input == "inf" || input == "inff")
		return (true);

	char *end;
	std::strtod(input.c_str(), &end);

	if ((*end == 'f' && *(end + 1) == '\0') || *end == '\0')
		return (true);
	else if (input.length() == 3 && input.find("'", 0) == 0 && input.rfind("'", input.length()) == 2)
		return (true);

	return (false);
}
bool ScalarConverter::isCharCase(std::string input)
{
	if (input.length() == 3 && input.find("'", 0) == 0 && input.rfind("'", input.length()) == 2)
		return (true);
	return (false);
}

bool ScalarConverter::isSpecialCases(std::string input)
{
	if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" ||
		input == "-inff" || input == "inf" || input == "inff")
		return (true);

	return (false);
}

void ScalarConverter::printSpecialCases(const std::string &input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	if (input == "nan" || input == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inf" || input == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (input == "inf" || input == "inff")
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
}

bool ScalarConverter::convertToChar(double nbr, char &c)
{
	if (!isascii(nbr))
		return (false);

	c = static_cast<char>(nbr);

	return (true);
}
bool ScalarConverter::convertToInt(double nbr, int &n)
{

	if (nbr < std::numeric_limits<int>::min() || nbr > std::numeric_limits<int>::max())
		return (false);

	n = static_cast<int>(nbr);

	return (true);
}
bool ScalarConverter::convertToFloat(double nbr, float &f)
{
	if ((nbr < std::numeric_limits<float>::min() || nbr > std::numeric_limits<float>::max()) && nbr != 0)
		return (false);

	f = static_cast<float>(nbr);

	return (true);
}

void ScalarConverter::printTable(double nbr)
{
	ScalarConverter::printChar(nbr);

	ScalarConverter::printInt(nbr);

	ScalarConverter::printFloat(nbr);

	std::cout << "double: " << std::fixed << std::setprecision(1) << nbr << std::endl;
}

void ScalarConverter::printChar(double nbr)
{
	char c;

	std::cout << "char: ";

	if (!ScalarConverter::convertToChar(nbr, c))
		std::cout << "impossible";
	else if (!isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << c << "'";
	std::cout << std::endl;
}
void ScalarConverter::printInt(double nbr)
{
	int n;

	std::cout << "int: ";

	if (!ScalarConverter::convertToInt(nbr, n))
		std::cout << "overflow";
	else
		std::cout << n;
	std::cout << std::endl;
}
void ScalarConverter::printFloat(double nbr)
{
	float f;

	std::cout << "float: ";

	if (!ScalarConverter::convertToFloat(nbr, f))
		std::cout << "overflow";
	else
		std::cout << std::fixed << std::setprecision(1) << f << "f";
	std::cout << std::endl;
}
