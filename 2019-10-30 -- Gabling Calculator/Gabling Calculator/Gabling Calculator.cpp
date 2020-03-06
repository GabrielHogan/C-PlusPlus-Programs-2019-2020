// Gabling Calculator.cpp : Defines the entry point for the console application.
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
	int Coins = 100, Dice1 = 0, Dice2 = 0, Turns = 0, DiceTotal = 0;

	// Clock for random numbers
	srand(time(0));

	// Instructions
	cout << "Welcome to the Gabling Calulator!" << endl;
	cout << "The point of this game is to show you how bad gambling actually is!" << endl;
	system("pause");

	//LOOOOOOOOOOP!

	do {
		Turns++; // ADDS a turn
		Dice1 = rand() % 6 + 1; // Rolls Dice 1
		Dice2 = rand() % 6 + 1; // Rolls Dice 2
		DiceTotal = Dice1 + Dice2;

		if (DiceTotal == 7 || DiceTotal == 11) {
			cout << "WOW, Looks like you actually won! Heres 10 coins!" << endl;
			Coins += 10; // Gives 10 Coins! WIIINNERRR!
		}
		else if (DiceTotal == 2 || DiceTotal == 3 || DiceTotal == 12) {
			cout << "WOW, Looks like you really suck! We're taking 10 coins!" << endl;
			Coins -= 10; // Takes 10 Coins! MEGA LOOOSERRR!
		}
		else {
			cout << "WOW, Looks like you suck! We're taking 2 coins!" << endl;
			Coins -= 2; // Takes 2 Coins! LOOOSERRR!
		}
		
		// COINS LEFT
		cout << "You have " << Coins << " Coins left!" << endl;

	} while (Coins > 0);
		
	// How many turns did it take?
	cout << "It tooks " << Turns << " turns for you to lose!!!!" << endl;


		system("pause");




    return 0;
}
