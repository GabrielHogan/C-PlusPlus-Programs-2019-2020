// Math Functions.cpp : Defines the entry point for the console application.
// Gabriel Hogan 8/27/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!


int main()
{

	//Declare Variables
	int a, b;

	cout << "Please, enter a value for A" << endl;
	cin >> a;
	cout << "Please enter a value for B" << endl;
	cin >> b;
	cout << "a + b = " << a + b << endl; //Add 
	cout << "a - b = " << a - b << endl; //Subtract
	cout << "a * b = " << a * b << endl; //Multiply
	cout << "a / b = " << a / b << endl; //Divide
	cout << "a % b = " << a % b << endl; //Modulus Function (Remainder)
	cout << "a + b/2 = " << a + b/2 << endl; //
	cout << "(a + b)/2 = " << (a + b)/2 << endl; //Average

	system("pause");


    return 0;
}

