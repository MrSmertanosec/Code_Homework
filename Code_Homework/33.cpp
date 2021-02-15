#include <iostream>

bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	std::cin >> n;

	if (is_prime(n))
	{
		std::cout << "true";
	}

	else
	{
		std::cout << "false";
	}
}