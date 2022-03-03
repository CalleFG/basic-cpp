#include <iostream>

int main()
{
	int Integers[4] = { 4, 8, 12, 16 };

	const int Difference = Integers[1] - Integers[0];

	for (int i = 0; i < 3; i++)
	{
		if (Integers[i + 1] - Integers[i] != Difference)
		{
			std::cout << "Series does not have an Arithmetic Progression." << std::endl;
			return 0;
		}
	}

	std::cout << "Series has an Arithmetic Progression." << std::endl;
}
