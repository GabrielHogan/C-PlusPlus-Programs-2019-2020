// SetW Practice.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 8/21/2019

//Header Files
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for SetW)
#include "iomanip" // Changing the look or formatting output
#include "string" // Allows for string variables

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	//Define Stuff
	const string company = "Hello! How are you?";
	

	cout << setiosflags(ios::right);

	cout << setw(20) << company << endl;

	cout << setw(20) << company.substr(0,  9) << endl;

	cout << company.substr(0, 9).length() << endl;

	system("pause");


    return 0;
}

