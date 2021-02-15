#include <iostream>
#include <stack>

int main()
{
	int num;
	std::cin >> num;

	// #1
	int prob1 = num;
	std::stack<int> stack;

	for (; prob1 > 0; prob1 /= 10)
	{
		stack.push(prob1 % 10);
	}

	while (stack.size() != 0)
	{
		std::cout << stack.top() << " ";
		stack.pop();
	}

	// #2
	int prob2 = num;

	for (; prob2 > 0; prob2 /= 10)
	{
		std::cout << prob2 % 10 << " ";
	}

	// #3 - #4
	int prob3 = num;
	int sum = 0;
	int mul = 1;

	for (; prob3 > 0; prob3 /= 10)
	{
		sum += prob3 % 10;
		mul *= prob3 % 10;
	}

	std::cout << sum;
	std::cout << mul;

	return 0;
}