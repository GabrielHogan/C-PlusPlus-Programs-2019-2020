// Collatz Conjecture Program.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/6/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

///DEFINE THE FUNCTIONSSSSS


int main()
{
	///Local Variables
	int i = 1; //While Loop Controller 
	int number = 0; //Number to Test

	///SOME CODEEEE
	//Introduction Text
	cout << "Welcome to the Collatz Conjecture Tester!" << endl;
	cout << "Please enter a number you would like to test!" << endl;
	cin >> number;

	//Loop for testing the number
	do {
		//Check if Even
		if (number % 2 == 0) {
			number /= 2;
		}
		//Check if Odd
		else if (number % 2 != 0) {
			number *= 3;
			number += 1;
		}
		cout << number << endl;
	} while (number != 1);

	//Output Text
	cout << "This Number is Proven" << endl;
	system("pause");

	//RETURNNN
    return 0;
}

