// Day of The Week Calculator.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!!

int main()
{
	int year;
	int month;
	int tempmonth;
	int day;
	int weekday;
	int c;
	int d;
	int f;
	int g;

	//Beginning
	cout << "Welcome do the Weekday Calculator!" << endl << "Let's begin by asking, What Year was this date?" << endl;
	cin >> year;

	cout << "Awesome year it was in " << year << "!" << endl << "What month was it (Please use the number of the month, for ex, Febuary = 2" << endl;
	cin >> tempmonth;

	cout << "Awesome! it was the month " << tempmonth << " of year " << year << "!" << endl << "What day of the month was it?" << endl;
	cin >> day;
	
	//Set Month
	switch (tempmonth) {
		case 1:
			month = 11;
			break;
		case 2:
			month = 12;
			break;
		case 3:
			month = 1;
			break;
		case 4:
			month = 2;
			break;
		case 5:
			month = 3;
			break;
		case 6:
			month = 4;
			break;
		case 7:
			month = 5;
			break;
		case 8:
			month = 6;
			break;
		case 9:
			month = 7;
			break;
		case 10:
			month = 8;
			break;
		case 11:
			month = 9;
			break;
		case 12:
			month = 10;
			break;
	}


	//Math Time
	c = year / 100;
	d = year % 100;
	f = day + ((13 * month - 1) / 5) + d + (d / 4) + (c / 4) - 2 * c;
	g = f - 7 * (f / 7);

	system("cls");

	switch (g) 
	{
		case 0:
			cout << "The day of the week was Sunday on: " << tempmonth << "/" << day << "/" << year <<endl;
			break;
		case 1:
			cout << "The day of the week was Monday on: " << tempmonth << "/" << day << "/" << year << endl;
			break;
		case 2:
			cout << "The day of the week was Tuesday on: " << tempmonth << "/" << day << "/" << year << endl;
			break;
		case 3:
			cout << "The day of the week was Wednesday on: " << tempmonth << "/" << day << "/" << year << endl;
			break;
		case 4:
			cout << "The day of the week was Thursday on: " << tempmonth << "/" << day << "/" << year << endl;
			break;
		case 5:
			cout << "The day of the week was Friday on: " << tempmonth << "/" << day << "/" << year << endl;
			break;
		case 6:
			cout << "The day of the week was Saturday on: " << tempmonth << "/" << day << "/" << year << endl;
			break;
	}

	system("pause");
	return 0;
}

