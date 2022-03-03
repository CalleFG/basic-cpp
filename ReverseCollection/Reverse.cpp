#include <iostream>

using namespace std;
string ReverseString(const string& String);

int main()
{
	const string DefaultString = "Hello";
	cout << "Default string: " << DefaultString << endl;

	const string ReversedString = ReverseString(DefaultString);
	cout << "Reversed string: " << ReversedString << endl;
}

string ReverseString(const string& String)
{
	string NewString;

	for (int i = String.length(); i >= 0; i--)
	{
		NewString += String[i];
	}

	return NewString;
}
