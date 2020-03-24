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



int main()
{
	/// Defining Outfile Stream 
	// "outfile" in this case is the variable.
	ofstream outfile;
	//Specify a file to open.
	outfile.open("myName.txt");

	///Printing To Files
	//You use the variable like a cout.
	outfile << "Gabe" << endl;
	outfile << "14" << endl;

	///Close the files@
	outfile.close();


	///Defining Infile Stream
	// "infile" is this case is the variable
	ifstream infile;
	//Specify file to open
	infile.open("myName.txt");

	///Getting Stuff From the Files
	string x;
	infile >> x;

	int y;
	infile >> y;
	
	///Close the File
	infile.close();
	

	///Output the info
	cout << "Hello " << x << endl;
	cout << "You are " << y << " years old!" << endl;

	///PAUSEEEEE
	system("pause");

}

