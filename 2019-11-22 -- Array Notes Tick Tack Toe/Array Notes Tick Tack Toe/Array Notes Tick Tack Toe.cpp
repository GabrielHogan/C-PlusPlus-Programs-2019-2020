// Array Notes Tick Tack Toe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"

using namespace std;



int main()
{
	int row = 0, column = 0, number = 0, counter = 0;
	int i[3][3];


	//Row Loop
	do {
		//Column Loop
		do {
			//Math Stuff
			number++;
			i[row][column] = number;
			// Print the Stuff
			cout << i[row][column];
			//Decide Whether to print a line
			if (column < 2) {
				cout << char(179);
			}
			//Math Stuff
			counter++;
			column++;
		} while (column < 3);
		//Next Line
		cout << endl;
		if (row < 2) {
			cout << char(196) << char(197) << char(196) << char(197) << char(196) << endl;
		}

		//Math Stuff
		column = 0;
		row++;

	} while (row < 3);

	cout << endl << setw(2) << char(2) << "/" << endl << "/" << char(219) << "   " << char(196) << char(196) << "  Hello There!" << endl << "/ \\" << endl;



	//PAUSEEEEE
	system("pause");

    return 0;
}

