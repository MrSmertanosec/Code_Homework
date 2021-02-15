#include <iostream>

int* del_el(int* arr, int index, int n)
{
	int* new_arr = new int[n - 1];

	for (int i = 0; i < n; ++i)
	{
		if (i >= index)
		{
			new_arr[i] = arr[i + 1];
			continue;
		}

		new_arr[i] = arr[i];
	}

	delete[] arr;

	return new_arr;
}

int main()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	int i;
	std::cin >> i;

	arr = del_el(arr, i, n);

	for (int i = 0; i < n - 1; ++i)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}