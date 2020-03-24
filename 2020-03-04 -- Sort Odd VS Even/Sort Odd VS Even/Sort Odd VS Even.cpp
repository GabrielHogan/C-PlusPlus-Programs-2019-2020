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
void fillArray(int i[]);
bool decideEven(int test);
void printArray(int list[], int length);
void printFileArray(int list[], int length, ofstream &out);


int main()
{
	//-------------------------------------------------------
	///Variablessss
	//Input Array
	int input[11];
	//Even Array
	int even[11];
	//Odd Array
	int odd[11];
	//Counters
	int loopControl = 1;
	int evenCounter = 1;
	int oddCounter = 1;
	//Temporary Variables
	int temp = 0;
	//-------------------------------------------------------
	///File Stream!!!
	ofstream get;
	get.open("output.txt");
	assert(!get.fail());
	
	//-------------------------------------------------------
	///REALLL CODE
	fillArray(input);

	do {
		//Loop Stuff
		temp = input[loopControl];
		decideEven(temp); 

		if (decideEven(temp) == true) {
			even[evenCounter] = temp;
			evenCounter++;
		}
		else if (decideEven(temp) == false) {
			odd[oddCounter] = temp;
			oddCounter++;
		}

		loopControl++;

	} while (loopControl < 11);

	//Console Output
	cout << "The Original Array is: ";
	printArray(input, 11);
	cout << endl;
	cout << "The Even Array is: ";
	printArray(even, evenCounter);
	cout << endl;
	cout << "The Odd Array is: ";
	printArray(odd, oddCounter );
	cout << endl;


	//File Output
	get << "The Original Array is: ";
	printFileArray(input, 11, get);
	get << endl;
	get << "The Even Array is: ";
	printFileArray(even, evenCounter, get);
	get << endl;
	get << "The Odd Array is: ";
	printFileArray(odd, oddCounter, get);
	get << endl;

	//PAUSEEEEE
	system("pause");
}

//-------------------------------------------------------

///FUNCTIONNNSSSSS
void fillArray(int i[]) {
	int loopController = 1;
	int temp;

	do {
		cout << loopController << endl;
		cin >> temp;
		i[loopController] = temp;
		loopController++;
		system("cls");
	} while (loopController < 11);

}

bool decideEven(int test) {
	int temp;

	temp = test % 2;

	if (temp == 0) {
		return true;
	}
	else if (temp != 0) {
		return false;
	}
}

void printArray(int list[], int length) {
	for (int x = 1; x < length; x++) {
		cout << list[x] << ", ";
	}
}

void printFileArray(int list[], int length, ofstream &out) {
	for (int x = 1; x < length; x++) {
		out << list[x] << ", ";
	}
}