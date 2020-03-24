// FileStream Password Checker.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/16/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "assert.h" // Used to check if file opened
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

///FUNCTIONSSS
void accessGranted(string nameallowed);
void accessDenied();


int main()
{

	///Getting Stuff From the Files
	int i = 4; //loop controller
	string username, inputusername;
	string password, inputpassword;
	string name, alloweduser;
	bool allowed = false;
	
	///COLORS
	system("color 0a");

	///Defining passwords Stream
	// "passwords" is this case is the variable
	ifstream passwords;
	//Specify file to open
	passwords.open("B8Passwords2020.txt");
	//Check if file opened
	assert(!passwords.fail());

	///GET USER INFO
	//Get Username
	cout << "Security Login Terminal:" << endl;
	cout << endl;
	cout << "Enter Username:" << endl;
	getline(cin, inputusername);
	system("cls");
	//Get Passwords
	cout << "Security Login Terminal:" << endl;
	cout << endl;
	cout << "Enter Password:" << endl;
	getline(cin, inputpassword);
	system("cls");

	///Check User/Pass
	//LOOPY DOOPY
	do {
		passwords >> username;
		passwords >> password;
		passwords >> name;

		if (username == inputusername && password == inputpassword) {
			accessGranted(name);
			allowed = true;
		}

	} while (!passwords.eof());

	if (allowed == false) {
		accessDenied();
	}

	///Close the File
	passwords.close();

	///PAUSEEEEE
	system("pause");

    return 0;
}

void accessGranted(string nameallowed) {
	system("color 02");
	cout << "ACCESS GRANTED" << endl;
	cout << endl;
	cout << "Welcome " << nameallowed << "!" << endl;
	cout << endl;
}

void accessDenied() {
	system("color 04");
	cout << "ACCESS DENIED" << endl;
	cout << endl;
}

