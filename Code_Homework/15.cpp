#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int num;
	std::cin >> num;

	std::string str;

	for (int temp; num != 0; num >>= 1)
	{
		temp = num & 1;
		str.push_back(temp + 48);
	}

	reverse(str.begin(), str.end());

	std::cout << str;
}