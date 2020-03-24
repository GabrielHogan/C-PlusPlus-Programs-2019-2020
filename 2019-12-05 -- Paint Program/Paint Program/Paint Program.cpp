// Paint Program.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 12/3/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

void getData(int &length, int &width, double &costPerGallon) {
	cout << "What is the length of the room you would like to paint?" << endl;
	cin >> length;
	system("cls");
	cout << "Awesome! You would like to paint a room with a length of " << length << "feet!" << endl;
	cout << "What is the width of the wall?" << endl;
	cin >> width;
	system("cls");
	cout << "Awesome! You would like to paint a room with a length of " << length << "feet, and a width of " << width << endl;
	cout << "What is the Cost per Gallon of paint?" << endl;
	cin >> costPerGallon;
	cout << "Awesome! You would like to paint a room with a length of " << length << "feet, and a width of " << width << " at a price of " << costPerGallon << "per gallon!" << endl;
	system("pause");
	system("cls");
}

int numGallons(int length, int width) {
	///Variable
	int Total = 0;
	int Gallons = 0;
	int height = 8;
	//Find total amount of Square Feet
	Total = (2 * (length * height)) + (2 * (width * height));
	//Find amounts of gallons
	Gallons = Total / 250;
	if ((Total % 250) > 0) {
		Gallons++;
	}
	return Gallons;
}

double Cost(int numGal, double costPerGallon) {
	return numGal * costPerGallon;
}



int main()
{
	/// Variablesss
	int length = 0;
	int width = 0;
	int height = 8;
	double costPerGallon = 11.95;

	/// Welcome and ask for values!
	cout << "Welcome to the paint cost calculator!" << endl;
	//Get that Data
	getData(length, width, costPerGallon);
	//Find # of Gallons, Find cost & Output
	cout << "The total cost of " << numGallons(length, width) << " Gallons is $" << Cost(numGallons(length, width), costPerGallon) << endl;
	system("pause");
	
    return 0;
}

