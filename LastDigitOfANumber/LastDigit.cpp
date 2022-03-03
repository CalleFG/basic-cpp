#include <iostream>

int LastDigit(int Value);

int main()
{
	int Number = 137;

	std::cout << "Last digit of " << Number << " is " << LastDigit(Number);
}

int LastDigit(int Value)
{
	return Value % 10;
}
