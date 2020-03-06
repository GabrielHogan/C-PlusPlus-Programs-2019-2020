// Phone Plan Program.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 11/20/2019


//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

//Functions
double plancost(int a) {
	return (23.12 + (27.29 * a));
}

int main()
{
	//Variables
	int phones = 0;

	//Ask Stuff
	cout << "Hello there! welcone to the Phone Plan Cost Calculator!" << endl;
	cout << "How many phones would you like to have on your plan?" << endl;
	cin >> phones;
	system("cls");
	//Ask the function + print!
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
	cout << "The cost of " << phones << " phone(s) on our plan will be: $" << plancost(phones) << endl;

	//PAUSEEEE
	system("pause");

    return 0;
}