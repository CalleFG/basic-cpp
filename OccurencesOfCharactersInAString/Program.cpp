#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

void PrintOccurrences(string input);

int main()
{
	const string InputString = "This is a test string";

	PrintOccurrences(InputString);
}

void PrintOccurrences(string input)
{
	// Make all characters uppercase.
	for_each(input.begin(), input.end(), [](char& c) { c = toupper(c); });
	// Remove spaces.
	input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());

	const int length = input.length();

	const char* CharacterArray = &input[0];

	map<char, int> CharacterMap;

	for(int i = 0; i < length; i++)
	{
		CharacterMap[CharacterArray[i]] += 1;
	}

	for(const auto& item : CharacterMap)
	{
		cout << item.first << ": " << item.second << endl;
	}
}