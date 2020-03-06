// Switch Program.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)


// Not sure what this is called
using namespace std; // Always add this!!!



int main()
{

	int user_input;

	cout << "Enter a number betweem 1 and 5 to receive " << endl;
	cin >> user_input;
	
	switch (user_input) { 
		case 1:
			cout << "First is the worst!" << endl;
			break;
		case 2:
			cout << "Second is the best!" << endl;
			break;
		case 3:
			break;
			cout << "Third is a nerd!" << endl;
		case 4:
			cout << "Forth is a fork!" << endl;
			break;
		case 5:
			cout << "Fifth is a IDK MAN" << endl;
			break;
		default:
			cout << "WHO DO YOU THINK YOU ARE!!!" << endl;
			break;
	}


	system("pause");
    return 0;
}

