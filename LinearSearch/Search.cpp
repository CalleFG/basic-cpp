#include <iostream>
#include <vector>

using namespace std;
int Search(int Value, const vector<int>& CollectionIn);

int main()
{
	vector<int> Collection = { 1, 5, 7, 12, 17 };
	int NumberToFind = 7;

	int SearchResult = Search(NumberToFind, Collection);
	if (SearchResult == -1)
	{
		cout << "Couldn't find " << NumberToFind << " in the collection." << endl;
	}
	else
	{
		cout << "Found " << NumberToFind << " at position " << SearchResult << endl;
	}
}

int Search(int Value, const vector<int>& CollectionIn)
{
	for (int i = 0; i < CollectionIn.size(); i++)
	{
		if (CollectionIn[i] == Value)
		{
			return i;
		}
	}

	return -1;
}
