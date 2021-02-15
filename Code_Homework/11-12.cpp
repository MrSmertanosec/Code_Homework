#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	// #11
	srand(time(NULL));

	std::cout << "              " << static_cast<char> (rand()) << "\n";
	std::cout << "            " << static_cast<char> (rand()) << "   " << static_cast<char> (rand()) << "\n";
	std::cout << "          " << static_cast<char> (rand()) << "       " << static_cast<char> (rand()) << "\n";
	std::cout << "        " << static_cast<char> (rand()) << "           " << static_cast<char> (rand()) << "\n";
	std::cout << "      " << static_cast<char> (rand()) << "               " << static_cast<char> (rand()) << "\n";
	std::cout << "      " << static_cast<char> (rand()) << "               " << static_cast<char> (rand()) << "\n";
	std::cout << "      " << static_cast<char> (rand()) << "               " << static_cast<char> (rand()) << "\n";
	std::cout << "      " << static_cast<char> (rand()) << "               " << static_cast<char> (rand()) << "\n";
	std::cout << "      " << static_cast<char> (rand()) << "               " << static_cast<char> (rand()) << "\n";
	std::cout << "      ";

	for (int i = 0; i < 17; ++i)
	{
		std::cout << static_cast<char> (rand());
	}
	
	std::cout << "\n\n\n\n\n";
	
	// #12
	std::cout << "           *\n";
	std::cout << "         *   *\n";
	std::cout << "       *       *\n";
	std::cout << "     *           *\n";
	std::cout << "   *               *\n";
	std::cout << " *    *    *    *    *\n";

	return 0;
}