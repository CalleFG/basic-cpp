#include <iostream>

using namespace std;

int main()
{
	int x = 323;
	int y = 12153;

	cout << "Number A: " << x << " - " << "Number B:" << y << endl;
	cout << "Swapping." << endl;

	int temp = x ^ y;
	x = x ^ temp;
	y = x ^ temp;
	
	cout << "Number A: " << x << " - " << "Number B:" << y << endl;
}