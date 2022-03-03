#include <iostream>

using namespace std;

int main()
{
	int SecretNumber = 23;
	int Tries = 0;
	int Input = 0;

	cout << "Guess the secret number." << endl;

	while (Input != SecretNumber)
	{
		cin >> Input;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(200, '\n');
			cout << "Invalid input, try again." << endl;
			continue;
		}

		Tries++;

		if (Input != SecretNumber)
		{
			cout << "That was not the right number, try again." << endl;
		}
	}


	cout << endl << "You guessed right, " << Input << " is the secret number." << endl;
	cout << "It took you " << Tries << " tries." << endl;
}
