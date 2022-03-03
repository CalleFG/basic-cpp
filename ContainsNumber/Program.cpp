#include <iostream>

using namespace std;

bool ContainsNumber(int check, int number);

int main()
{
	const int a = 2;
	const int b = 3332241;

	if (ContainsNumber(b, a))
	{
		cout << b << " contains number " << a << endl;
	}
	else
	{
		cout << b << " does not contain number " << a << endl;
	}
}

bool ContainsNumber(int check, int number)
{
	if (check < 0)
	{
		check *= -1;
	}

	while (check != 0)
	{
		if (check % 10 == number)
		{
			return true;
		}

		check /= 10;
	}

	return false;
}
