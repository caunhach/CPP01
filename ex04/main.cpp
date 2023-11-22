#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "arguments error" << std::endl;
		return 1;
	}
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "can't open file" << std::endl;
	}
}