// For Loop.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "string"

// Not sure what this is called
using namespace std; // Always add this!!!

int main()
{
	string str;
	cout << "Please enter a number with a .00 ";
	cin >> str;

	//Find the String length
	int strsize;
	strsize = str.size();
	cout << endl << strsize ;
	
	//Find how many commas to add
	int commanumber;
	commanumber = ((strsize - 3) / 3) - 1;
	cout << endl << commanumber;
	//Find Remainder
	int commaremainder;
	commaremainder = ((strsize - 3) % 3);
	cout << endl << commaremainder;

	//Get string without decimals
	string strnodecimal = str.substr(0, (strsize - 3));
	cout << endl << strnodecimal;



	//insert commas every 3
	int comma = 0;

	if (commaremainder == 0) {
		comma = 3;
		for (int i = commanumber; i > 0; i--) {

			str.insert(comma, ",");

			cout << endl << str;

			comma += 4;

		}
	}
	else if (commaremainder == 1) {
		comma = 1;
		str.insert(comma, ",");
		comma += 4;

		for (int i = commanumber; i > 0; i--) {
			
			str.insert(comma, ",");

			cout << endl << str;

			comma += 4;

		}
	}
	else if (commaremainder == 2) {
		comma = 2;
		str.insert(comma, ",");
		comma += 4;

		for (int i = commanumber; i > 0; i--) {

			str.insert(comma, ",");

			cout << endl << str;

			comma += 4;

		}
	}
	

	

	system("pause");



		/*

	string NumericString = "1234567890"; // It should output 1,234,567,890
	unsigned int Length = strlen(NumericString.c_str()); // Get the length of the string, so we know when we have to stop
	string FinalString; // Will be our output
	unsigned int CommaOffset = ln % 3; // Get the comma offset
	for (unsigned int i = 0; i < Length; ++i) // Loop each character
	{
		// If our Index%3 == CommaOffset and this isn't first character, add a comma
		if (i % 3 == CommaOffset && i)
		{
			FinalString += ','; // Add the comma
		}
		FinalString += NumericString.c_at()[i]; // Add the original character
	}
	// Done! 





	double x = 0.01, sum = 0;
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

	for (int temp = 1; temp <= 30; temp++) {
		



		cout << "Salary on day " << temp << " is $" << x << endl;
		sum += x;
		x *= 2;
	}


	cout << "The total you will make after 30 days is: $" << sum << endl;
	system("pause");
	*/
    return 0;
}

