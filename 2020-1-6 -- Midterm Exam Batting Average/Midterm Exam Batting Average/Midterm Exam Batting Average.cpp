// Midterm Exam Batting Average.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 12/19/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

///DEFINE THE FUNCTIONSSSSS
void GetData(int Set, double &Game1, double &Game2, double &Game3, double &Game4);
double Average(double Game1, double Game2, double Game3, double Game4);


int main()
{
	///Local Variables
	int i = 1; //While Loop Controller (Yes I know this couldve been done better)
	double storage[100]; // Array for storing averages 
	double input1 = 0;
	double input2 = 0;
	double input3 = 0;
	double input4 = 0;

	///SOME CODEEEE
	//Introduction Text
	cout << "Welcome to the batting average calculator!" << endl;
	cout << "Please keep in mind this program can only store 100 sets of games!" << endl;
	cout << "To begin, how many sets of games would you like to enter?" << endl;
	cin >> i;
	cout << "Okay! You would like to enter " << i << " sets of 4 games!" << endl;
	// Loopy Doop for getting values!
	for (int a = 1; a <= i; a++) {
		GetData(a, input1, input2, input3, input4);
		storage[a] = Average(input1, input2, input3, input4);
	}
	//Stuff before the end!
	system("cls");
	cout << "Congrats! You have jsut entered " << i << " set(s) of data!" << endl;
	cout << "Press Enter to View the Log!";
	system("pause>nul");
	system("cls");
	//Top of the log
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
	cout << "----------------------------------" << endl;
	// Loopy Doop for the logger!
	for (int b = 1; b <= i; b++) {
		cout << "Set " << b << " Average: " << storage[b] << endl;
	}
	//Bottom of Log
	cout << "----------------------------------" << endl;
	cout << endl;
	///End with a pause!!!
	system("pause");

    return 0;
}

/// THE CODE FOR THE FUNCTIONSSSSS
void GetData(int Set, double &Game1, double &Game2, double &Game3, double &Game4) {
	system("cls");
	cout << "This is the beginning of set #" << Set << endl;
	cout << "What was the batting average of the first game of this set?" << endl;
	cin >> Game1;
	cout << "What was the batting average of the second game of this set?" << endl;
	cin >> Game2;
	cout << "What was the batting average of the third game of this set?" << endl;
	cin >> Game3;
	cout << "What was the batting average of the forth game of this set?" << endl;
	cin >> Game4;
	cout << "This is the end of set #" << Set << endl;
	system("pause");
}
//------
double Average(double Game1, double Game2, double Game3, double Game4) {
	return (Game1 + Game2 + Game3 + Game4) / 4;
}