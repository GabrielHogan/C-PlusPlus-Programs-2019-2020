// Letters with SetW.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 8/29/2019

//Header Files
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for SetW)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

int main()
{
	
	cout << setiosflags(ios::left);
	cout << setw(14) << "**********" << setw(14) << "**********" << setw(8) << "**" << "**" << endl;
	cout << setw(14) << "**********" << setw(14) << "**********" << setw(8) << "**" << "**" << endl;
	cout << setw(18) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(18) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(18) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(18) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(6) << "**" << setw(12) << "****" << setw(10) << "**" << setw(8) << "**********" << endl;
	cout << setw(6) << "**" << setw(12) << "****" << setw(10) << "**" << setw(8) << "**********" << endl;
	cout << setw(8) << "**" << setw(10) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(8) << "**" << setw(10) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(8) << "**" << setw(10) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(8) << "**" << setw(10) << "**" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(18) << "**********" << setw(10) << "**" << setw(8) << "**" << "**" << endl;
	cout << setw(18) << "**********" << setw(10) << "**" << setw(8) << "**" << "**" << endl;


	system("pause");
    return 0;
}

