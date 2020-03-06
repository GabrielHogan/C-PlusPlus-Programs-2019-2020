// State Capitals - FileStream Functions.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/31/2020

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
void getDataFile(ifstream &get);


int main()
{
	///Defining dataStorage Stream
	// "dataStorage" is this case is the variable
	ifstream dataStorage;
	string info;
	string input;
	double cost,customerprice;
	char whateveryourheartdesires;

	//Start Stuff
	getDataFile(dataStorage);

	//Clear the screen
	system("cls");

	//LOOPY DOOPY
	do {

		//Get Values Loop
		do {
			dataStorage >> input; //Get The Info
			if (input != "*") {
				cout << input << " ";
			}

		} while (input != "*");
		//Other Vvalues
		dataStorage >> cost;
		dataStorage >> whateveryourheartdesires;
		//Calculate Price
		if (whateveryourheartdesires = 'R') {
			customerprice = cost;
		}
		else if (whateveryourheartdesires = 'H') {
			customerprice = cost * 0.5;
		}
		else if (whateveryourheartdesires = 'T') {
			customerprice = cost * 0.80;
		}
		else if (whateveryourheartdesires = 'C') {
			customerprice = cost * 0.25;
		}
		//Check for end
		if (cost != 0) {
			cout << " costs: $" << customerprice << endl;;
		}
		//Reset Cost
		cost = 0;
		//Next Line
		cout << endl;

	} while (!dataStorage.eof());

	///Close the File
	dataStorage.close();

	///PAUSEEEEE
	system("pause");

	return 0;
}

///Variable Code
void getDataFile(ifstream &get) {
	string filename;
	cout << "Enter file name for request: ";
	getline(cin, filename);
	get.open(filename.c_str());
	assert(!get.fail());
}