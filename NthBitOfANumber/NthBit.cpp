#include <iostream>

using namespace std;

int GetBit(int Value, int Position);
int SetBit(int Value, int Position);

int main()
{
	cout << "Enter integer." << endl;
	int Number;
	cin >> Number;

	cout << "Enter bit position." << endl;
	int Position;
	cin >> Position;

	cout << endl << "The bit in position " << Position << " in number " << Number << " is: " << GetBit(Number, Position) << endl << endl;

	cout << "Enter a position to set bit in." << endl;
	int PositionToSet;
	cin >> PositionToSet;
	cout << "Number " << Number << " is now " << SetBit(Number, PositionToSet) << " after setting bit in position " << PositionToSet << endl;
}

int GetBit(int Value, int Position)
{
	return (Value >> Position) & 1;
}

int SetBit(int Value, int Position)
{
	return Value | (1 << Position);
}
