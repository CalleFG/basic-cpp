#include <iostream>

bool IsEven(int Value);

int main()
{
	int Number = 3;

	std::cout << Number;

	if (IsEven(Number))
	{
		std::cout << " is even.";
	}
	else
	{
		std::cout << " is odd.";
	}
}

bool IsEven(int Value)
{
	return Value % 2 == 0;
}
