#include <iostream>
#include <map>

int main()
{
	int n;
	std::cin >> n;
	char* str = new char[n];
	std::cin >> str;

	std::map<char, int> map;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		auto it = map.find(str[i]);

		if (it != map.end())
		{
			++it->second;
		}
		else
		{
			map.insert(std::pair<char, int>(str[i], 0));
		}
	}

	char max = str[0];
	int max_quant = 0;

	for (auto it = map.begin(); it != map.end(); ++it)
	{
		if (it->second > max_quant)
		{
			max_quant = it->second;
			max = it->first;
		}
	}

	std::cout << max;

}