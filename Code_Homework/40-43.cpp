#include <iostream>

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

void n_to_zero(int n)
{
	if (n == 0)
	{
		std::cout << n;
		return;
	}

	std::cout << n;

	n_to_zero(n - 1);
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << factorial(n);
	n_to_zero(n);

	return 0;
}