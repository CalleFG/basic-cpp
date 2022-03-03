#include <iostream>

using namespace std;

template<typename T>
void Swap(T& a, T& b);

int main()
{
	int x = 10;
	int y = 15;

	cout << "Before swap, A: " << x << " B: " << y << endl;
	cout << "Swapping." << endl;
	Swap(x, y);
	cout << "After swap, A: " << x << " B: " << y << endl;
}

template<typename T>
void Swap(T& a, T& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
