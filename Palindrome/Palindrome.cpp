#include <iostream>

using namespace std;
bool IsPalindrome(const string& StringIn);
bool IsPalindromeRecursive(const string& StringIn, int Start, int End);

int main()
{
	string Test = "civic";

	if (IsPalindromeRecursive(Test, 0, Test.length() - 1))
	{
		cout << Test << " is a palindrome." << endl;
	}
	else
	{
		cout << Test << " is not a palindrome." << endl;
	}
}

bool IsPalindrome(const string& StringIn)
{
	const int StringLength = StringIn.length();

	if (StringLength <= 1)
	{
		return true;
	}

	for (int i = 0; i < StringLength / 2; i++)
	{
		cout << StringIn[i] << " - " << StringIn[StringLength - 1 - i] << endl;
		if (StringIn[i] != StringIn[StringLength - 1 - i])
		{
			return false;
		}
	}

	return true;
}

bool IsPalindromeRecursive(const string& StringIn, int Start, int End)
{
	if (Start == End)
	{
		return true;
	}
	if (StringIn[Start] != StringIn[End])
	{
		return false;
	}
	if (Start < End + 1)
	{
		return IsPalindromeRecursive(StringIn, Start + 1, End - 1);
	}

	return true;
}
