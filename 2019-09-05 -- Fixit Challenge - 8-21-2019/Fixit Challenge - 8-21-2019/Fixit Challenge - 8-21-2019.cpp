// Fixit Challenge - 8-21-2019.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 8/21/2019

//Header Files
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for SetW)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!



int main()
{

	cout << setiosflags(ios::left);

	cout << setw(27) << "Student Name";
	cout << setw(30) << "TEST SCORE" << endl;

	cout << setw(30) << "Adams, Mike";
	cout << setw(30) << "73" << endl;

	cout << setw(30) << "Conley, Theresa";
	cout << setw(30) << "86" << endl;

	cout << setw(30) << "Sampson, Ron";
	cout << setw(30) << "92" << endl;

	cout << setw(30) << "O'Malley, Colleens";
	cout << setw(30) << "81" << endl;


	system("pause");


    return 0;
}

