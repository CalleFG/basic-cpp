#include <iostream>

int Absolute(int x, int y);

int main()
{
	int x = 10;
	int y = 5;

	std::cout << "Number A: " << x << " Number B: " << y << std::endl;
	std::cout << "Their absolute difference is: " << Absolute(x, y);
}

int Absolute(int x, int y)
{
	int AbsoluteValue = x - y;

	if (AbsoluteValue < 0)
	{
		AbsoluteValue *= -1;
	}

	return AbsoluteValue;
}