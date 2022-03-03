#include <iostream>

using namespace std;

template<typename T>
void CompareValues(T a, T b);

int main()
{
	float x = 10;
	float y = 15;

	CompareValues(x, y);
}

template<typename T>
void CompareValues(T a, T b)
{
	if (a > b)
	{
		cout << "Value A (" << a << ") is greater than Value B (" << b << ")" << endl;
	}
	else
	{
		cout << "Value B (" << b << ") is greater than Value A (" << a << ")" << endl;
	}
}
