#include <iostream>

void my_calc(int num1, int num2, char op)
{
	if (op == '+')
	{
		std::cout << num1 + num2;
	}

	if (op == '-')
	{
		std::cout << num1 - num2;
	}

	if (op == '*')
	{
		std::cout << num1 * num2;
	}

	if (op == '/')
	{
		std::cout << num1 / num2;
	}

	if (op == '%')
	{
		std::cout << num1 % num2;
	}
}

int main()
{
	int num1;
	int num2;
	char op;

	std::cin >> num1 >> num2 >> op;

	my_calc(num1, num2, op);

	return 0;
}