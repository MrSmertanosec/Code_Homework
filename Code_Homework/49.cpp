#include <iostream>

int num(int n, int k)
{
	int size = 0;

	for (int i = n; i != 0; i /= 10)
	{
		++size;
	}

	int* arr = new int[size];

	for (int i = 0, j = n; j != 0; j /= 10, ++i)
	{
		arr[i] = j % 10;
	}

	int num = 0;

	for (int i = size - 1; i >= size - k; --i)
	{
		num = num * 10 + arr[i];
	}

	delete[] arr;

	return num;
}

int main()
{
	int n;
	int k;

	std::cin >> n;
	std::cin >> k;

	int a = num(n, k);
	std::cout << a;

	return 0;
}