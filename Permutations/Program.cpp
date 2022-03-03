#include <algorithm>
#include <iostream>

using namespace std;

void PrintPermutations(string& string);

int main()
{
	string str = "ABC";

	PrintPermutations(str);
}

void PrintPermutations(string& string)
{
	do
	{
		cout << string << ", ";
	} while (next_permutation(string.begin(), string.end()));
}
