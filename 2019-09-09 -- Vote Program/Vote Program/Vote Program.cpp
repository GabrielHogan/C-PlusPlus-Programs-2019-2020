// Vote Program.cpp : Defines the entry point for the console application.
// Gabriel Hogan 9/3/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output!
#include "string" // Add for string variables!

// Not sure what this is called
using namespace std; // Always add this!!

int main()
{
    //Declare Variables
	int user_age;
	string registered_voter;
	string US_citizen;
	string want_register;

	//Begin
	cout << "Welcome to the Virgina Voter verification questionaire!" << endl << "What is your age?" << endl;
	cin >> user_age;



	// Older than 18
	if (user_age >= 18) {

		if (user_age < 120) {
			
			cout << "You are old enough to vote!" << endl;
			cout << "Are you a registered voter? (Y)es (N)o" << endl;
			cin >> registered_voter;

			// End Questionare
			if (registered_voter == "yes" || registered_voter == "Yes" || registered_voter == "y" || registered_voter == "Y" ) {
				cout << "Great! You can vote at any time!" << endl;
			}

			// Continue
			else {
				cout << "Okay! Would you like to check if you are able to register? (Y)es (N)o" << endl;
				cin >> want_register;

				//Continue
				if (want_register == "yes" || want_register == "Yes" || want_register == "y" || want_register == "Y") {
					cout << "Are you a US citizen? (Y)es (N)o" << endl;
					cin >> US_citizen;

					// Continue
					if (US_citizen == "yes" || US_citizen == "Yes" || US_citizen == "y" || US_citizen == "Y") {
						system("start chrome https://vote.elections.virginia.gov/Registration/Eligibility");
				    }
					//stop
					else {
						cout << "Unfortunatly you must be a US citizen to vote here." << endl;
						system("pause");
					}

				}
				//Stop
				else {
					cout << "Okay! If you would like to register at a later date just rerun this program!" << endl;
					system("pause");
				}


			}
		
		
		
		
		
		
		
		
		}
		
		else {
			cout << "Ya got problems mate!" << endl;
		}
	}


	// Less than 18
	if (user_age < 18) {

		if (user_age <= 0) {
			cout << "Ya got problems mate!" << endl;
		}
		else {
			cout << "Unfortunatly you are too young to vote!" << endl;
		}
	}


	system("pause");

    return 0;
}

