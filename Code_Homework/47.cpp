#include <iostream>

char* str_rev(char* str, int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		char temp = str[n - 1 - i];
		str[n - 1 - i] = str[i];
		str[i] = temp;
	}

	return str;
}

int main()
{
	int n;
	std::cin >> n;

	char* str = new char[n];
	std::cin >> str;

	str = str_rev(str, n);

	std::cout << str;

	return 0;
}