// Slope.cpp : Defines the entry point for the console application.
// Gabriel Hogan

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output

// Not sure what this is called
using namespace std; // Always add this!!!

int gcf(int a, int b)
{
	if (b == 0)
		return a;
	return gcf(b, a % b);

}


int main()
{


	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, cy = 0, cx = 0, cy2 = 0, cx2 = 0, slope = 0;

	cout << "Welcome Mate! This a slope calculator program!" << endl;
	cout << "What is the X value of the First Pair?" << endl;
	cin >> x1;
	cout << "What is the Y value of the First Pair?" << endl;
	cin >> y1;
	cout << "What is the X value of the Second Pair?" << endl;
	cin >> x2;
	cout << "What is the Y value of the Second Pair?" << endl;
	cin >> y2;

	cout << "Alright! You chose the pairs: (" << x1 << "," << y1 << ") & (" << x2 << ","<< y2 << ")" << endl;
	slope = (y2 - y1) / (x2 - x1);
	cy = (y2 - y1);
	cx = (x2 - x1);
	
	if (cx == 0) {
		cout << "The slope of theses pairs is: " << "undefined" << endl;
	}
	else if (slope == 0) {
		cout << "The slope of theses pairs is: " << slope << endl;
	}
	else {
		cy = abs(cy);
		cx = abs(cx);
		cy2 = cy / gcf(cy, cx);
		cx2 = cx / gcf(cy, cx);
		cout << "The slope of theses pairs is: " << cy2 << "/" << cx2 << endl;
	}











	system("pause");
    return 0;
}

