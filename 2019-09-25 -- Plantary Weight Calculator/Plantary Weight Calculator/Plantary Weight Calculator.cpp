// Plantary Weight Calculator.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{

	int planet = 0;
	double earth_weight;

	while (!((planet > 1) && planet < 9))
	{
		cout << "Welcome to the Planetary Weight Calulator!" << endl;
		cout << "What planet would you like: \nJupiter(1) \nMars(2) \nMercury(3) \nNeptune(4) \nSaturn(5) \nUranus(6) \nVenus(7)" << endl;
		cin >> planet;

		cout << "Okay! You chose " << planet << "! How much does your object weight?" << endl;
		cin >> earth_weight;

		switch (planet)
		{
		case 1:
			cout << "On Jupiter this item would weight: " << earth_weight * 2.65 << endl;
			break;
		case 2:
			cout << "On Mars this item would weight: " << earth_weight * 0.39 << endl;
			break;
		case 3:
			cout << "On Mercury this item would weight: " << earth_weight * 0.38 << endl;
			break;
		case 4:
			cout << "On Neptune this item would weight: " << earth_weight * 1.23 << endl;
			break;
		case 5:
			cout << "On Saturn this item would weight: " << earth_weight * 1.17 << endl;
			break;
		case 6:
			cout << "On Uranus this item would weight: " << earth_weight * 1.05 << endl;
			break;
		case 7:
			cout << "On Venus this item would weight: " << earth_weight * 0.78 << endl;
			break;
		default:
			cout << "You have chosen an incorrect planet!" << endl;
			system("pause");
			break;
		}
	}
	system("pause");
    return 0;
}
