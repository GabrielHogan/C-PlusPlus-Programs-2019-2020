// Arrary-Loop-Random Number.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 10/28/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "ctime" // Clock 

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	// Variables
	int x[8], Loop = 0, Secret = 0, Sum = 0;

	// Clock 
	srand(time(0)); // Clock


	do {
		//Generate Secret Number Between 1 and 100:
		Secret = rand() % 100 + 1;
		// Do Loop stuff!
		x[Loop] = Secret;
		cout << x[Loop] << endl;
		Sum += x[Loop];
		Loop++;

	} while (Loop < 8);
		
	cout << "The Sum is: " << Sum << endl;
	system("pause");

    return 0;
}

