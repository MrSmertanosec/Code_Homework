#include <iostream>
#include <string>

int main()
{
	char* name = new char[20];
	int size;

	std::cin >> name;

	// #6
	for (int i = 0; i < 20; ++i)
	{
		if (name[i] == '\0')
		{
			size = i;
			break;
		}
	}

	for (int i = size - 1; i >= 0; --i)
	{
		std::cout << name[i];
	}

	//delete[] name; 7rd xndri hamar comment

	// #7
	char* temp = new char[size];
	
	int j = 0;
	for (int i = 0; i < size; ++i)
	{
		if (name[i] == 'a' || name[i] == 'i' || name[i] == 'e' ||
			name[i] == 'o' || name[i] == 'u' || name[i] == 'A' ||
			name[i] == 'I' || name[i] == 'E' || name[i] == 'O' || name[i] == 'U')
		{
			continue;
		}

		temp[j] = name[i];
		++j;
	}
	
	size = j;

	delete[] name;
	name = temp;
	
	for (int i = 0; i < size; ++i)
	{
		std::cout << name[i];
	}

	return 0;
}