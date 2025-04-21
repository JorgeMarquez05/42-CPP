#include "Harl.hpp"

int	get_lvl_index(std::string level)
{
	std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == lvls[i])
		{
			return (i);
		}
	}
	return (-1);
}

int	main(int argc, char *argv[])
{
	Harl	c;
	int		level;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	level = get_lvl_index(argv[1]);
	switch (level)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		c.complain("DEBUG");
		// fallthrough
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		c.complain("INFO");
		// fallthrough
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		c.complain("WARNING");
		// fallthrough
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		c.complain("ERROR");
		// fallthrough
		break ;
	default:
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
