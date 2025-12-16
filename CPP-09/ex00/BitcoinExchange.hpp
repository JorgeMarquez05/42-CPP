#pragma once
#include <fstream>
#include <iostream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
  private:
	std::map<std::string, double> _database;

  public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	//! Member function
	void loadDatabase(const std::string &filename);
	void processInput(const std::string &filename);
	bool validateDate(const std::string &date);
	bool validateValue(const std::string &valueStr);
};
