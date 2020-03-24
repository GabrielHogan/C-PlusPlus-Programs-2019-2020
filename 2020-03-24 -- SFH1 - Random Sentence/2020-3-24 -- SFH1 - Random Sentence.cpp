// 2020-3-24 -- SFH Day 1 - Make a Random Number and Place it in a Sentence.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Gabe Hogan - 3/24/2020

//All Header Files Used This Year!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "assert.h" // Used to check if file opened
#include "ctime" // Clock used for random number
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

int generaterandomnumber() {
	return rand() % 100 + 1;
}


int main()
{
	// Variablesss
	int random;


	// Get Random Number
	srand(time(0)); // Clock
	random = generaterandomnumber();

	// Print the Sentence
	cout << "There is a " << random << "% chance that Gabe will fail the upcoming AP Tests!" << endl;

	// PAUSEEEE
	system("pause");

	return 0;
}