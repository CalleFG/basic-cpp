#include "ClassC.h"

using namespace std;

int main()
{
	cout << "Program startup." << endl;

	ClassC* test = new ClassC();

	cout << "Deleting class." << endl;

	delete test;

	cout << "Program shutdown." << endl;
}