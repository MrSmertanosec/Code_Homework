#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::string line;
	std::ifstream File;
	std::string first_ch;

	File.open("59.txt");

	if (File.is_open())
	{
		while (std::getline(File, line))
		{
			first_ch.push_back(line[0]);
		}

		File.close();
	}

	std::cout << first_ch;

	return 0;
}
