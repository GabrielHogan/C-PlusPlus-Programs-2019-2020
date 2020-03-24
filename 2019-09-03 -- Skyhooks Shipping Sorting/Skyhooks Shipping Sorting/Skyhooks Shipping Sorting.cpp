// Skyhooks Shipping Sorting.cpp : Defines the entry point for the console application.
// Gabriel Hogan 8/27/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iomanip" // Changing the look or formatting output!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!

int main()
{

	//Declare Variables!
	int skyhooks;

	//Ask for # of packages!
	cout << "Please enter the number of Skyhooks to ship!" << endl;
	cin >> skyhooks;
	cout << endl;

	//Do Math
	int boxes = skyhooks / 3;
	int envelopes = skyhooks % 3;
	double boxesprice = boxes * 4.59;
	double envelopesprice = envelopes * 1.79;
	double totalcost = boxesprice + envelopesprice;

	//Send The Stuff!
	cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2); //Make it look right
	cout << "To pack and ship " << boxes << " boxes, it will cost: $" << boxesprice << endl;
	cout << "To pack and ship " << envelopes << " envelopes, it will cost: $" << envelopesprice << endl << endl;
	cout << "The total shipping cost is: $" << totalcost << endl << endl;
    

	system("pause");

    return 0;
}

