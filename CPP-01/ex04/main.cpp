#include <fstream>
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong Number of parameters" << std::endl;
		return (1);
	}
	std::string text;
	std::ifstream readfile(argv[1]);
	std::string file_out = std::string(argv[1]) + ".replace";
	std::ofstream Myfile(file_out.c_str());
	if (!Myfile.is_open())
	{
		std::cerr << "Failed to open file: " << file_out << std::endl;
		return (1);
	}
	while (std::getline(readfile, text))
	{
		std::cout << text << std::endl;
		if (text.compare(argv[2]))
			text = argv[3];
		Myfile << text;
	}
	// std::cout << argv[1] << std::endl;
}