// Random Number Guessing Game.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 10/24/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "ctime" // Clock 
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

int generaterandomnumber() {
	return rand() % 100 + 1;
}

int main()
{
	//Restart
	Restart:

	//Variablessss
	int Secret, Guess, GuessesLeft;
	string Difficulty;

	// Welcome & Level Select
	cout << "WELCOME! This is the Random Number Guessing Game" << endl;
	cout << "Select Difficulty: (E)asy, (M)edium, (H)ard" << endl;
	getline(cin, Difficulty);

	// Set Amount of tries based on Difficulty
	if (Difficulty == "E" || Difficulty == "e")
		GuessesLeft = 20;
	else if (Difficulty == "M" || Difficulty == "m")
		GuessesLeft = 15;
	else if (Difficulty == "H" || Difficulty == "h")
		GuessesLeft = 8;
	else {
		cout << "You have chosen an incorrect level option!" << endl;
		system("pause");
		goto Restart;
	}

	// Generate Secret Number Between 1 and 10:
	srand(time(0)); // Clock
	Secret = generaterandomnumber();

	// Loopy Doopy
	do {
		cout << "Guess the number (1 to 100): You have " << GuessesLeft << " guesses left!" << endl;
		cin >> Guess;
		if (Secret < Guess) {
			cout << "The secret number is lower" << endl;
			Guess++;
			GuessesLeft--;
		}
		else if (Secret > Guess) {
			cout << "The secret number is higher" << endl << endl;
			Guess++;
			GuessesLeft--;
		}
		else if (Secret = Guess) {
		}
	} while (Secret != Guess && GuessesLeft > 0);

	// Decide whether they won or lost!
	if (Secret == Guess) {
		system("cls");
		cout << "Congratulations, You Won The Game!" << endl;
	}
	else if (Secret != Guess) {
		system("cls");
		cout << "Congratulations, You Monumentally Suck! (You Lost!)" << endl;
	}

	//STOPPPP
	system("pause");

	return 0;
}

