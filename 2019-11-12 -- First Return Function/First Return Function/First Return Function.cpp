// First Return Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include "iostream"

using namespace std;

string name() {
	return "Gabe Hogan";
}

double agein10() {
	return 14 + 10;
}


int main()
{
	cout << "My name is " << name() << " and in 10 years I will be " << agein10() << " years old!" << endl;
	system("pause");

    return 0;
}

