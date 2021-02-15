#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];
	int even = 0;
	int odd = 0;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];

		if (arr[i] % 2 == 0)
		{
			++even;
		}
		else
		{
			++odd;
		}
	}

	std::cout << even << " " << odd;
}