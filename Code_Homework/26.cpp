#include <iostream>

double get_D(int a, int b, int c)
{
	return (double) (b * b) - (4 * a * c);

}

double* get_answer(int a, int b, int c)
{
	if (a == 0)
	{
		return new double((double) -c / b);
	}

	double d;
	d = get_D(a, b, c);

	if (d == 0)
	{
		return new double((double)-b / (2 * a));
	}

	if (d > 0)
	{

	double x1;
	double x2;

	x1 = (double) (-b + sqrt(d)) / (2 * a);
	x2 = (double) (-b - sqrt(d)) / (2 * a);

	double* answer = new double[2];
	answer[0] = x1;
	answer[1] = x2;
	return answer;
	}
}

int main()
{
	int a;
	int b;
	int c;

	std::cin >> a >> b >> c;

	double* answer = get_answer(a, b, c);

	if (get_D(a, b, c) > 0)
	{
		std::cout << answer[0] << " " << answer[1];
	}

	if (get_D(a, b, c) == 0)
	{
		std::cout << *answer;
	}

	return 0;
}