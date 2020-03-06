// Average-Score.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//Header Files
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!!
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	//Declare Variables
	double input1, input2, input3, input4, input5, average, pause_to_view;

	cout << "Enter first number and press <Enter>" << endl;
	cin >> input1;
	cout << "Enter second number and press <Enter>" << endl;
	cin >> input2;
	cout << "Enter third number and press <Enter>" << endl;
	cin >> input3;
	cout << "Enter fourth number and press <Enter>" << endl;
	cin >> input4;
	cout << "Enter fifth number and press <Enter>";
	cin >> input5;
	average = (input1 + input2 + input3 + input4 + input5) / 5.0;
	//iomanip header -- setprecision is how  many decimal points
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(5); 
	cout << "The average number is " << average << endl;
	cout << "Type <e> then press enter to end " << endl;

	cin >> pause_to_view;

    return 0;
}

