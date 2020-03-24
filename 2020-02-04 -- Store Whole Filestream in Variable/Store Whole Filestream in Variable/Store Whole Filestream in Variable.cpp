// Store Whole Filestream in Variable.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 2/4/2020

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
	string Name[8];
	string Price[8];
	int loopcontrol = 0;

	//Start Stuff
	getDataFile(dataStorage);


	//LOOPY DOOPY
	do {

		//Get Values Loop
		do {
			loopcontrol++;
			dataStorage >> Name[loopcontrol];
			dataStorage >> Price[loopcontrol];

		} while (loopcontrol != 7);
		//Next Line
		cout << endl;

	} while (!dataStorage.eof());

	loopcontrol = 0;
	system("cls");

	//Get Values Loop
	do {
		loopcontrol++;
		cout << Name[loopcontrol] << " ";
		cout << "= $" << Price[loopcontrol];
		cout << endl;

	} while (loopcontrol != 7);









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