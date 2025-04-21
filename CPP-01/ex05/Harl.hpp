#pragma once
#include <iostream>

enum	Level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(std::string level);
	Harl(/* args */);
	~Harl();
};
