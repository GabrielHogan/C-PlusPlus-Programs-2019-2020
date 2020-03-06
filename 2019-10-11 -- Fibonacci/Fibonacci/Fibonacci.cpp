// Fibonacci.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	//Variables
	int a = 0;
	int b = 1;
	int temp = 0;
	int count = 0;


	//Codeeee

	//Intro and amount
	cout << "Welcome to the Fibonacci Printer!!! \nHow many #'s of the sequence would you like?" << endl;
	cin >> count;
	cout << "Alright! Here are " << count << " numbers of the Fibonacci Sequence!" << endl;
	
	//Starting Numbers!
	temp = a + b;

	//All other numbers!
	while (count > 0) {

		//Print
		cout << a << endl;
		//Math
		temp = a + b;
		// Update stuff
		a = b;
		b = temp;
		count--;
	}

	//Pause
	system("pause");

    return 0;
}

