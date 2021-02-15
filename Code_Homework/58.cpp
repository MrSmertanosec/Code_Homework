#include <iostream>

class Calculator
{
public:
	
	double sum(double op1, double op2)
	{
		return op1 + op2;
	}

	double sub(double op1, double op2)
	{
		return op1 - op2;
	}

	double mul(double op1, double op2)
	{
		return op1 * op2;
	}

	double div(double op1, double op2)
	{
		return op1 / op2;
	}
};

int main()
{
	Calculator cal;
	std::cout << cal.sum(1, 5);

	return 0;
}