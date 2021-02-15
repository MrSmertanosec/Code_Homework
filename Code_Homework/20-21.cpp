#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int* arr1 = new int[n];
	int* arr2 = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr1[i];
	}

	for (int j = 0; j < n; ++j)
	{
		std::cin >> arr2[j];
	}
	
	for (int i = 0; i < n; ++i)
	{
		std::cout << arr1[i] * arr2[i] << " ";
	}

	std::cout << "\n";

	for (int i = 0; i < n; ++i)
	{
		std::cout << arr1[i] + arr2[i] << " ";
	}

	delete[] arr1;
	delete[] arr2;

	return 0;
}