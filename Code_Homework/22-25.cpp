#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int** mtx = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		mtx[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> mtx[i][j];
		}
	}

	int sum = 0;

	for (int i = 0, j = 0; i < n; ++i, ++j)
	{
		sum += mtx[i][j];
		std::cout << mtx[i][j] << " ";
	}

	std::cout << "\n";

	for (int i = 0, j = n - 1; i < n; ++i, --j)
	{
		sum += mtx[i][j];
		std::cout << mtx[i][j] << " ";
	}

	std::cout << "\n" << sum << "\n";

	int* arr = new int[n];

	for (int i = 0, j = 0; i < n; ++i, ++j)
	{
		arr[i] = mtx[i][j];
		mtx[i][j] = mtx[i][n - j - 1];
		mtx[i][n - j - 1] = arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << mtx[i][j] << " ";
		}

		std::cout << "\n";
	}

	delete[] arr;

	for (int i = 0; i < n; ++i)
	{
		delete[] mtx[i];
	}
	delete[] mtx;

	return 0;
}