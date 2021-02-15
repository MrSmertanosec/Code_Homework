#include <iostream>

int main()
{
	int row;
	int column;
	std::cin >> row >> column;

	int** mtx = new int*[row];

	for (int i = 0; i < row; ++i)
	{
		mtx[i] = new int[column];
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			std::cin >> mtx[i][j];
		}
	}

	int* arr = new int[row * column];
	int index = 0;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			arr[index] = mtx[i][j];
			++index;
		}
	}

	for (int i = 0; i < row * column; ++i)
	{
		std::cout << arr[i] << " ";
	}

	delete[] arr;

	for (int i = 0; i < row; ++i)
	{
		delete[] mtx[i];
	}

	delete[] mtx;
}