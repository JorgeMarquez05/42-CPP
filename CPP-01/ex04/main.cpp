#include <fstream>
#include <iostream>

std::string replace_str(std::string text, char *argv[])
{
	size_t	pos;

	std::string to_remove = argv[2];
	std::string to_replace = argv[3];
	pos = 0;
	pos = text.find(argv[2], pos);
	while (pos != std::string::npos)
	{
		text.erase(pos, to_remove.length());
		text.insert(pos, to_replace);
		pos += to_replace.length();
		pos = text.find(argv[2], pos);
	}
	return (text);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong Number of parameters" << std::endl;
		return (1);
	}
	std::string text;
	std::ifstream readfile(argv[1]);
	if (!readfile.is_open())
	{
		std::cerr << "Failed to open file: " << argv[1] << std::endl;
		return (1);
	}
	std::string file_out = std::string(argv[1]) + ".replace";
	std::ofstream Myfile(file_out.c_str());
	if (!Myfile.is_open())
	{
		std::cerr << "Failed to open file: " << file_out << std::endl;
		return (1);
	}
	while (std::getline(readfile, text))
	{
		text = replace_str(text, argv);
		Myfile << text;
	}
}
