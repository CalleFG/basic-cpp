#include <iostream>

using namespace std;

int GetLowest(int array[], int size);
int GetHighest(int array[], int size);
int GetSum(int array[], int size);
float GetAverage(int sum, int size);

int main()
{
	int IntArray[5] = { 9, 5, 2, 8, 3 };
	int Length = sizeof(IntArray) / sizeof(int);

	cout << "Lowest: " << GetLowest(IntArray, Length) << " Highest: " << GetHighest(IntArray, Length) << endl;
	cout << "Sum: " << GetSum(IntArray, Length) << " Average: " << GetAverage(GetSum(IntArray, Length), Length) << endl;
}

int GetLowest(int array[], int size)
{
	int lowest = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] < lowest)
		{
			lowest = array[i];
		}
	}

	return lowest;
}

int GetHighest(int array[], int size)
{
	int highest = array[0];

	for (int i = 1; i < size; i++)
	{
		if(array[i] > highest)
		{
			highest = array[i];
		}
	}

	return highest;
}

int GetSum(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

float GetAverage(int sum, int size)
{
	return (float)sum / size;
}
