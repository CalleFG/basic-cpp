#include <iostream>

using namespace std;

void FibonacciIterative(int length);
int FibonacciRecursive(int first, int second, int counter, int max);
int FibonacciMathRecursive(int n);

int main()
{
	//FibonacciIterative(1);
	//cout << 0;
	//FibonacciRecursive(0, 1, 0, 9);

	for(int i = 0; i <= 9; i++)
	{
		cout << FibonacciMathRecursive(i) << ",";
	}
}

void FibonacciIterative(int length)
{
	int first = 0;
	int second = 1;

	cout << first;

	for(int i = 0; i < length; i++)
	{
		cout << ", " << second;

		second += first;
		first = second - first;
	}
}

int FibonacciRecursive(int first, int second, int counter, int max)
{
	cout << ", " << second;

	second += first;
	first = second - first;

	counter++;
	if(counter < max)
	{
		return FibonacciRecursive(first, second, counter, max);
	}
	return counter;
}

int FibonacciMathRecursive(int n)
{
	if (n <= 1)
	{
		return n;
	}

	return FibonacciMathRecursive(n - 1) + FibonacciMathRecursive(n - 2);
}
