// State Capitals - FileStream Functions.cpp : Defines the entry point for the console application.
// Gabriel - 1/29/2020

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

	//Start Stuff
	getDataFile(dataStorage);


	//LOOPY DOOPY
	do {

		//Get Values Loop
		do {
			dataStorage >> input; //Get The Info
			if (input != "*") {
				cout << input << " ";
			}

		} while (input != "*");
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