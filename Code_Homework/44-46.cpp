#include <iostream>

int n;

int fibonacci(int num, int prev, int i)
{
	if (i == n)
	{
		return num;
	}

	return fibonacci(num + prev, num, ++i);
}

void print_arr(int* arr, int i)
{
	if (i == n)
	{
		return;
	}

	std::cout << *arr;
	print_arr(++arr, ++i);
}

int main()
{
	std::cin >> n;

	std::cout << fibonacci(1, 1, 2) << "\n";

	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	print_arr(arr, 0);

	delete[] arr;

	return 0;
}