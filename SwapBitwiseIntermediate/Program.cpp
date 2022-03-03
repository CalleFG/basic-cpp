#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 7;

	cout << "Before swap:  Number A: " << a << " Number B: " << b << endl;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "After swap:  Number A: " << a << " Number B: " << b << endl;
}
