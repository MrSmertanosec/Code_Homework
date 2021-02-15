#include <iostream>

int main()
{
	char* str = new char;
	std::cin >> str;

	 #8
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a';
			str[i] += 'A';
		}
	}
	
	std::cout << str;

	// #9
	for (int i = 1; str[i] != '\0'; i += 2)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a';
			str[i] += 'A';
		}
	}

	std::cout << str;

	return 0;
}