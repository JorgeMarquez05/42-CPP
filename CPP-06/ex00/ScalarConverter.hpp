#pragma once
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>

// #include <cstring>

class ScalarConverter
{
  private:
	static bool validateInput(std::string input);
	static bool isSpecialCases(std::string input);
	static bool convertToChar(double nbr, char &c);
	static bool convertToInt(double nbr, int &n);
	static bool convertToFloat(double nbr, float &f);
	static void printSpecialCases(const std::string &input);
	static void printTable(double nbr);
	static void printChar(double nbr);
	static void printInt(double nbr);
	static void printFloat(double nbr);

  public:
	static void convert(std::string input);
};
