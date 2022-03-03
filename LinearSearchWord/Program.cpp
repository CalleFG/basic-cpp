#include <iostream>

using namespace std;

bool ContainsWord(const string& sentence, const string& search);

int main()
{
	const string Sentence = "Jag har kul.";

	cout << "Enter word to search for." << endl;
	string Search;
	cin >> Search;

	cout << "The sentence: \"" << Sentence << "\"";
	if (ContainsWord(Sentence, Search))
	{
		cout << " contains word ";
	}
	else
	{
		cout << " does not contain word ";
	}
	cout << "\"" << Search << "\"" << endl;
}

bool ContainsWord(const string& sentence, const string& search)
{
	const char* comparisons = &sentence[0];
	const char* searchword = &search[0];

	for (int i = 0; i < sentence.length(); i++)
	{
		if (comparisons[i] == searchword[0])
		{
			bool IsMatch = true;

			for (int j = 0; j < search.length(); j++)
			{
				if (comparisons[i + j] != searchword[j])
				{
					IsMatch = false;
					break;
				}
			}

			if (IsMatch)
			{
				return true;
			}
		}
	}

	return false;
}
