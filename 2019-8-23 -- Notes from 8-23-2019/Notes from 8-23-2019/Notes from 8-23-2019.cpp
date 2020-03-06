// Notes from 8-23-2019.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 8/21/2019

//Header Files
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for SetW)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	cout << setiosflags(ios::left | ios::showpoint) << setprecision(4);

	cout << setw(6) << "Name";
	cout << setw(7) << "Grade";
	cout << setw(10) << "GPA" << endl;

	cout << setw(7) << "Mary";
	cout << setw(5) << 10;
	cout << setw(10) << 3.590 << endl;

	cout << setw(7) << "John";
	cout << setw(5) << 12;
	cout << setw(10) << 3.770 << endl;

	cout << setw(7) << "Henry";
	cout << setw(5) << 11;
	cout << setw(10) << 3.860 << endl;

	cout << setw(7) << "Helen";
	cout << setw(5) << 9;
	cout << setw(10) << 2.560 << endl;

	system("pause>>null");

    return 0;
}

