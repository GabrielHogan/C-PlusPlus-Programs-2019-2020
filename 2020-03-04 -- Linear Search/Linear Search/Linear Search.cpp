// Sort Odd VS Even.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 2/21/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "assert.h" // Used to check if file opened
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

///Functions
int searchArray(string valueToSearch, string listToSearch[], int listLength);


int main()
{
	//-------------------------------------------------------
	///Variablessss
	//Define Array Variables
	string names[5];
	int arrayLength = 5;
	//Set Array Values
	names[0] = "Billie";
	names[1] = "Bob";
	names[2] = "Joe";
	names[3] = "Robert";
	names[4] = "Jonathan";
	//Value To Search
	string input = "unknown";
	//Location Found
	int inputLocation = -1;
	//-------------------------------------------------------
	///Get Input
	cout << "Enter a value to search!" << endl;
	getline(cin, input);
	system("cls");
	//-------------------------------------------------------
	///REALLL CODE
	//Get the location
	inputLocation = searchArray(input, names, arrayLength);
	//Check the location
	if (inputLocation == -1) {
		cout << "We could not locate this name in our array." << endl;
	}
	else {
		cout << "This name is located in spot " << inputLocation << " of the array." << endl;
	}

	//PAUSEEEEE
	system("pause");
}

//-------------------------------------------------------

///FUNCTIONNNSSSSS
int searchArray(string valueToSearch, string listToSearch[], int listLength) {
	for (int x = 0; x < listLength; x++) {
		if (listToSearch[x] == valueToSearch) {
			return x;
		}
	}
	//If Not Found
	return -1;
}