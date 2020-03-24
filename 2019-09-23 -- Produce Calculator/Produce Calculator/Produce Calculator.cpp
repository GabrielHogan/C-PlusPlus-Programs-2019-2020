// Produce Calculator.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "string" // Allows for string variables
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

int main()
{
	string item[5];
	string more[5];
	double cost_per[5], pounds[5];
	double totalcost;
	int i = 0;

		cout << "Wlcome to the automated produce ticket creator system!" << endl;
		cout << "To begin, how many items would you like to buy?" << endl;
		cin >> i;
		int noti = i;
		i--;
		while (i >= 0) { //for (int j = 0; j<=i; j++){
		
		//Item
		cout << "What item would you like to add?" << endl;
		getline(cin, item[i]);
		getline(cin, item[i]);

		//Pounds
		POUNDS_ERROR:
		cout << "Awesome! How many pounds of " << item[i] << " do you want?" << endl;
		cin >> pounds[i];

		if (pounds[i] >= 0.1 && pounds[i] <= 20) {
			cout << "Awesome, what is the price per pound cost of " << item[i] << "?" << endl;

		ERROR_COST:
			cin >> cost_per[i];
			if (cost_per[i] >= 0.24 && cost_per[i] <= 8.01) {
				goto CONTINUE;
			}
			else {
				cout << "This is an invalid price! (Must be between $0.24 & $8.01) \nPlease enter the price per pound cost of " << item[i] << endl;
				goto ERROR_COST;
			}

		}
		else {
			cout << "You have entered an incorrect weight. We are currently only selling items between 0.1 & 20 lbs. \nPlease reenter the amount of pounds you would like to buy!" << endl;
			goto POUNDS_ERROR;
		}

		CONTINUE:
		cout << endl;
		//Take 1 away from i every time.
		i--;
	}
	
		//Print Reciept
		PRINT:
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << setiosflags(ios::left | ios::showpoint) << setprecision(3);
			cout << "******************************************************" << endl;
			cout << setw(17) << "" << "SuperMarket Receipt" << endl << endl;
			cout << setw(15) << "Item" << setw(15) << "Weight" << setw(15) << "Price/lb" << setw(15) << "Cost" << endl;
			int t = 0;
			while (t < noti)
			{
				cout << setw(15) << item[t] << pounds[t] << setw(12) << " lb" << "$" << setw(12) << cost_per[t] << "$" << setw(12) << cost_per[t] * pounds[t] << endl;
				t++;
			}
			cout << endl << "******************************************************" << endl;
			cout << endl << endl << endl << endl << endl << endl << endl << endl;
	
	system("pause");
    return 0;
}

