#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	char* str = new char[n];
	std::cin >> str;

	int max = 1;
	int temp = 1;

	for (int i = 1; str[i] != '\0'; ++i)
	{
		if (str[i] == str[i - 1])
		{
			++temp;

			if (temp > max)
			{
				max = temp;
			}
		}
		else
		{
			temp = 1;
		}
	}

	std::cout << max;

}