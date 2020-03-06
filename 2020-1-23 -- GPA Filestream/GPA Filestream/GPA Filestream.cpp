// GPA Filestream.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/23/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "assert.h" // Used to check if file opened
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	///VARIABLESSSS
	string input, firstName, lastName;
	double calculate = 0, count = 0;

	///Defining gpaStorage Stream
	// "gpaStorage" is this case is the variable
	ifstream gpaStorage;
	//Specify file to open
	gpaStorage.open("GPAData.txt");
	//Check if file opened
	assert(!gpaStorage.fail());


	///Check GPA
	//LOOPY DOOPY
	do {

		//Get Name
		gpaStorage >> firstName >> lastName;

		//Get Values Loop
		do {
			gpaStorage >> input; //Get The Info
			
			if (input == "A") {
				calculate += 4;
				count++;
			}
			if (input == "B") {
				calculate += 3;
				count++;
			}
			if (input == "C") {
				calculate += 2;
				count++;
			}
			if (input == "D") {
				calculate += 1;
				count++;
			}
			if (input == "F") {
				calculate += 0;
				count++;
			}
			if (input == "*") {

			}

		} while (input != "*");

		//Format Output
		
		cout << setiosflags(ios::fixed | ios::showpoint | ios::left) << setprecision(2);
		//Output
		cout << firstName << " " << lastName << "'s GPA: " << (calculate / count) << endl;
		
		//Reset
		calculate = 0;
		count = 0;

	} while (!gpaStorage.eof());

	///Close the File
	gpaStorage.close();

	///PAUSEEEEE
	system("pause");

	return 0;
}
