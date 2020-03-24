// Learning Loops.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!!

int main()
{
	//Variables!!
	int number = 0, total = 0;
    
	//The Looop
	do {

		if (number % 2 != 0) {
			cout << number << endl;
			total += number;
		}

		number++;

	} while (number < 100);
	
	cout << "The Total of all the above numbers is " << total << endl;
	system("pause");
	
	return 0;
}

