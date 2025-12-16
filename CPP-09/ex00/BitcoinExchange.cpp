#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	_database = other._database;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		_database = other._database;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::loadDatabase(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open database");

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		size_t comma = line.find(',');
		if (comma == std::string::npos)
			continue;
		std::string data = line.substr(0, comma);
		double rate = std::atof(line.substr(comma + 1).c_str());

		_database[data] = rate;
	}
}

void BitcoinExchange::processInput(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open input file");

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t sep = line.find(" | ");
		if (sep == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, sep);
		std::string valueStr = line.substr(sep + 3);

		if (!validateDate(date))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (!validateValue(valueStr))
			continue;

		double value = std::strtod(valueStr.c_str(), NULL);

		std::map<std::string, double>::const_iterator it = _database.lower_bound(date);
		if (it == _database.end())
			--it;
		else if (it->first != date)
		{
			if (it == _database.begin())
			{
				std::cerr << "Error: no earlier date in database for " << date << std::endl;
				continue;
			}
			--it;
		}
		double rate = it->second;

		double result = value * rate;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}

bool BitcoinExchange::validateDate(const std::string &date)
{
	if (date.length() != 10)
		return false;

	if (date[4] != '-' || date[7] != '-')
		return false;

	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			return false;
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (year)
	{
	}

	if (month < 1 || month > 12)
		return (false);

	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (day < 1 || day > daysInMonth[month - 1])
		return (false);

	return (true);
}

bool BitcoinExchange::validateValue(const std::string &valueStr)
{

	char *end = NULL;
	double value = std::strtod(valueStr.c_str(), &end);
	if (*end != '\0')
	{
		std::cerr << "Error: bad input => " << valueStr << std::endl;
		return (false);
	}
	if (value < 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return (false);
	}
	return (true);
}