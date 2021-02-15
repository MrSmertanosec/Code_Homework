#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	int min = num % 10;
	int max = num % 10;

	num /= 10;

	for (; num != 0; num /= 10)
	{
		if (num % 10 > max)
		{
			max = num % 10;
		}

		if (num % 10 < min)
		{
			min = num % 10;
		}
	}

	if (max < 0 || min < 0)
	{
		max *= -1;
		min *= -1;

		int temp = max;
		max = min;
		min = temp;
	}

	std::cout << "Max: " << max << "\n";
	std::cout << "Min: " << min;

	return 0;
}