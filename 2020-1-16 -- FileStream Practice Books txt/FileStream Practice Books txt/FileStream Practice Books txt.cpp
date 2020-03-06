// Practice Filestream.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/14/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!



int main()
{
	///Defining enrollment Stream
	// "enrollment" is this case is the variable
	ifstream enrollment;
	//Specify file to open
	enrollment.open("Books.txt");

	///Getting Stuff From the Files
	int i = 4; //loop controller
	string title;
	int amount;
	double cost;
	
	cout << setiosflags(ios::fixed | ios::showpoint | ios::left) << setprecision(2);

	do {
		//GET VALUESSSS
		enrollment >> title;
		enrollment >> amount;
		enrollment >> cost;
		//PRINT VALUESS 
		cout << setw(15) << title << setw(15) << amount << "$" << setw(15) << cost << endl;
		i--;
	} while (i > 0);
	
	cout << endl;

	///Close the File
	enrollment.close();

	///PAUSEEEEE
	system("pause");

}

