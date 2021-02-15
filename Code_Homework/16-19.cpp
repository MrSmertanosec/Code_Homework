#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int* arr = new int[n];

	int max_index = 0;
	int min_index = 0;
	int sum;
	std::cin >> arr[0];
	int max_value = arr[0]; 
	int min_value = arr[0];

	for (int i = 1; i < n; ++i)
	{
		std::cin >> arr[i];

		if (max_value < arr[i])
		{
			max_index = i;
			max_value = arr[i];
		}

		if (min_value > arr[i])
		{
			min_index = i;
			min_value = arr[i];
		}
	}

	sum = max_value + min_value;

	std::cout << "Max index: " << max_index << "\n";
	std::cout << "Min index: " << min_index << "\n";
	std::cout << "Sum: " << sum << "\n";

	for (int i = n - 1; i >= 0; --i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";

	delete[] arr;

	return 0;
}