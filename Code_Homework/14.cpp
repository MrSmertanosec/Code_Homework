#include <iostream>
#include <vector>
#include <string>

int main()
{

	int num;
	std::cin >> num;
	std::vector<int> vec;
	std::string str;

	for (int temp; num != 0; num >>= 4)
	{
		temp = num & 15;
		vec.push_back(temp);
	}

	for (int i = vec.size() - 1; i >= 0; --i)
	{
		char ch;

		if (vec[i] >= 10)
		{
			ch = vec[i] + 55;
			str.push_back(ch);
			continue;
		}

		ch = vec[i] + 48;
		str.push_back(ch);
	}

	std::cout << str;

	return 0;
}