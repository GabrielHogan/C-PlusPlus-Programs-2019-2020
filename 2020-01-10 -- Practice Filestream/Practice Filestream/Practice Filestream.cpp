// Practice Filestream.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/10/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

///DEFINE THE FUNCTIONSSSSS

int main()
{
	// THIS PROGRAM IS FOR REFERENCE ONLY
	----- OUTFILE INFORMATION -----
	
	/// Defining Outfile Stream 
	// "outfile" in this case is the variable.
	ofstream outfile;
	//Specify a file to open.
	outfile.open("myfile.txt");

	///Printing To Files
	//You use the variable like a cout.
	outfile << "This was Printed to a File!" << endl;
	outfile << "It works like a COUT!!!" << endl;

	///Close the files@
	outfile.close();
	
	
	----- INFILE INFORMATION---- -
	///Defining Infile Stream
	// "infile" is this case is the variable
	ifstream infile;
	//Specify file to open
	infile.open("myfile.txt");
	
	///Getting Stuff From the Files
	string contents;
	infile >> contents;
	//Output the info
	cout << "File Contents:" << endl << contents << endl;
	
	///PAUSEEEEE
	system("pause");

    return 0;
}

