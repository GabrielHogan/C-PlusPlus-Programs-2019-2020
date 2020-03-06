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
	///Defining Infile Stream
	// "infile" is this case is the variable
	ifstream infile;
	//Specify file to open
	infile.open("random.txt");

	///Getting Stuff From the Files

	int number1;
	infile >> number1;
	
	string word1;
	infile >> word1;

	int number2;
	infile >> number2;
	 
	///Close the File
	infile.close();


	///Output the info
	cout << "Number: " << number1 << endl;
	cout << "Word: " << word1 << endl;
	cout << "Number: " << number2 << endl;
	cout << endl;
	cout << "Product of the Numbers is: " << number1 * number2 << endl;

	///PAUSEEEEE
	system("pause");

}

