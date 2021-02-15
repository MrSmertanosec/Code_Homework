#include <iostream>


int get_bits(int num)
{
	int count = 0;

	for (; num != 0; num >>= 1)
	{
		if (num & 1)
		{
			++count;
		}
	}

	return count;
}

int main()
{
	int num;
	std::cin >> num;

	std::cout << "Number of bits: " << get_bits(num);

	return 0;
}