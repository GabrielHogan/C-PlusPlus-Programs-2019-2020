// Function Average.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 11/20/2019


//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

//Functions
double tna(double a, double b, double c) {
	return ((a + b + c) / 3);
}

int main()
{
	// VARIABLESSSS
	double STUFF[3][3];
	// Kyle
	STUFF[0][0] = 2.3;
	STUFF[0][1] = 3.4;
	STUFF[0][2] = 3.6;
	// Ryan
	STUFF[1][0] = 4.2;
	STUFF[1][1] = 3.9;
	STUFF[1][2] = 4.1;
	// Tyler
	STUFF[2][0] = 3.7;
	STUFF[2][1] = 4.4;
	STUFF[2][2] = 4.2;

	//CODEEEEE
	cout << "This program will display a variety of stats for jumpers Kyle, Ryan, & Tyler!" << endl;
	cout << "This program displays averages rounded to the nearest hundreth!" << endl;
	system("pause");
	system("cls");
	cout << endl;
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

	// Person Averages
	cout << "Kyle's Average is: " << tna(STUFF[0][0], STUFF[0][1], STUFF[0][2]) << endl;
	cout << "Ryan's Average is: " << tna(STUFF[1][0], STUFF[1][1], STUFF[1][2]) << endl;
	cout << "Tyler's Average is: " << tna(STUFF[2][0], STUFF[2][1], STUFF[2][2]) << endl;
	cout << endl;
	// Set Averages
	cout << "The Set 1 Average is: " << tna(STUFF[0][0], STUFF[1][0], STUFF[2][0]) << endl;
	cout << "The Set 2 Average is: " << tna(STUFF[0][1], STUFF[1][1], STUFF[2][1]) << endl;
	cout << "The Set 3 Average is: " << tna(STUFF[0][2], STUFF[1][2], STUFF[2][2]) << endl;
	cout << endl;
	// Best / Worst Run Averages
	cout << "The Average of Their Best Runs is: " << tna(STUFF[0][2], STUFF[1][0], STUFF[2][1]) << endl;
	cout << "The Average of Their Worst Runs is: " << tna(STUFF[0][0], STUFF[1][1], STUFF[2][0]) << endl;
	cout << endl;
	// The Average of ALL Their Runs
	cout << "The Average of ALL Their Runs is: " << tna(tna(STUFF[0][0], STUFF[0][1], STUFF[0][2]), tna(STUFF[1][0], STUFF[1][1], STUFF[1][2]), tna(STUFF[2][0], STUFF[2][1], STUFF[2][2])) << endl;
	cout << endl;

	// PAUSEEEE
	system("pause");

    return 0;
}

