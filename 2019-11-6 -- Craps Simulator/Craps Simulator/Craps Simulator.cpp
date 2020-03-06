// Craps Simulator.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 10/30/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "ctime" // Clock 

// Not sure what this is called
using namespace std; // Always add this!!!



int main()
{
	// Varables
	int Games = 1000000000, Dice1 = 0, Dice2 = 0, Loses = 0, Wins = 0, DiceTotal = 0, DiceTotal2 = 0, WinningNumber = 0;
	bool Win = false;

	// Clock for random numbers
	srand(time(0));

	// Instructions
	cout << "Welcome to the Craps Simulator!" << endl;
	cout << "The point of this game is to show you how bad gambling actually is!" << endl;
	system("pause");

	//LOOOOOOOOOOP!

	do {

		Dice1 = rand() % 6 + 1; // Rolls Dice 1
		Dice2 = rand() % 6 + 1; // Rolls Dice 2
		DiceTotal = Dice1 + Dice2;

		if (DiceTotal == 7 || DiceTotal == 11) {
			Games--;
			Wins++;
			cout << "Win" << endl;


		}
		else if (DiceTotal == 2 || DiceTotal == 3 || DiceTotal == 12) {
			Games--;
			Loses++;
			cout << "Loss" << endl;
		}
		else {

			WinningNumber == DiceTotal; // Sets the winning number
			
			// Debugging Only							
			// cout << "Double";
			
			// LOOOOOOOOOOOOP 2.0!!
			do {	
				// Rolling the dice again!
				Dice1 = rand() % 6 + 1; // Rolls Dice 1
				Dice2 = rand() % 6 + 1; // Rolls Dice 2
				DiceTotal2 = Dice1 + Dice2;
				
				if (DiceTotal2 == 7) {
					cout << "Loss" << endl;
					Games--;
					Loses++;
				}
				else if (DiceTotal2 == WinningNumber) {
					cout << "Win" << endl;
					Games--;
					Wins++;
					Win = true;
				}
				
			} while (Win = false);

		}

				
	} while (Games > 0);

	cout << "You won " << Wins << " times!" << endl; // Say # of Wins!
	cout << "You lost " << Loses << " times!" << endl; // Say # of Loses!

	system("pause");




	return 0;
}
