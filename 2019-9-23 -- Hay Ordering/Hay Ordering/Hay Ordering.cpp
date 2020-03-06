-+// Hay Ordering.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 0/11/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "string" // Allows for string variables
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{
	
	string password_entered;
	int round = 0;
	int square = 0;
	int which;
	double round_price = 41.39;
	double square_price = 6.11;

	//Ask for password!
	cout << "Welcome to the Hay ordering system! To get stated please enter your password!" << endl;
	getline(cin, password_entered);

	if (password_entered == "") {
		
		system("cls");
		cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
		cout << "The current price of round hay bales is: $" << round_price << endl;
		cout << "The current price of square hay bales is: $" << square_price << endl;
		cout << "Would you like to order round bales(1), square bales(2), or some of both(3)?" << endl;
		TRY_AGAIN:
		cin >> which;

		if (which == 1) {

			cout << "You chose to order round bales! How many would you like? \n(If this is incorrect please reopen the program)" << endl;
			cin >> round;
			cout << "Okay! You would like to order " << round << " bales!" << endl;
			cout << "Press enter to view your receipt!";
			system("pause<nul");
			goto RECEIPT;

		}
		else if (which == 2) {

			cout << "You chose to order square bales! How many would you like? \n(If this is incorrect please reopen the program)" << endl;
			cin >> square;
			cout << "Okay! You would like to order " << square << " bales!" << endl;
			cout << "Press enter to view your receipt!";
			system("pause<nul");
			goto RECEIPT;

		}
	    else if (which == 3) {
			cout << "You chose to order both types of bales! How many round bales would you like? \n(If this is incorrect please reopen the program)" << endl;
			cin >> round;
			cout << "Okay! You would like to order " << round << " bales!" << endl;
			
			cout << "How many square bales would you like?" << endl;
			cin >> square;
			cout << "Okay! You would like to order " << square << " bales!" << endl;

			cout << "Press enter to view your receipt!";
			system("pause<nul");
			goto RECEIPT;
	    }
		else {
			cout << "That is not an option! Please try again!" << endl;
			goto TRY_AGAIN;
		}

		system("pause");

		}
		else {
			cout << "That is the incorrect password! Now Kicking you from the system!" << endl;
			system("pause");
			goto CLOSE;

		}
	RECEIPT:
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		cout << setiosflags(ios::left | ios::showpoint) << setprecision(2);
		cout << "******************************************************" << endl;
		cout << setw(17) << "" << "Hay Bales Receipt" << endl << endl;
		cout << setw(15) << "Type" << setw(15) << "Amount" << setw(15) << "Price/Bale" << setw(15) << "Cost" << endl;
		
		if (round >= 1) {
			cout << setw(15) << "Round Bales" << round << setw(14) << " Bales" << "$" << setw(14) << round_price << "$" << setw(15) << (round_price * round) << endl;
		}
		if (square >= 1) {
			cout << setw(15) << "Square Bales" << square << setw(14) << " Bales" << "$" << setw(14) << square_price << "$" << setw(15) << (square_price * square) << endl;
		}

		cout << endl << "******************************************************" << endl;
		cout << endl << endl << endl << endl << endl << endl << endl << endl;
		system("pause");

CLOSE:
    return 0;
}

