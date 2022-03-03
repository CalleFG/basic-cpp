#include <iostream>
#include <vector>

using namespace std;

bool IsLuckyNumber(int number);

int main()
{
	cout << "Enter an integer: " << endl;
	int value;
	cin >> value;

	cout << "Number " << value;
	if(IsLuckyNumber(value))
	{
		cout <<" is lucky." << endl;
	}
	else
	{
		cout <<" is not lucky." << endl;
	}
}

bool IsLuckyNumber(int number)
{
	if (number < 0)
	{
		number *= -1;
	}

	vector<int> List;

	while (number != 0)
	{
		int single = number % 10;

		for (const int& n : List)
		{
			if (n == single)
			{
				return false;
			}
		}

		List.push_back(single);

		number /= 10;
	}

	return true;
}
