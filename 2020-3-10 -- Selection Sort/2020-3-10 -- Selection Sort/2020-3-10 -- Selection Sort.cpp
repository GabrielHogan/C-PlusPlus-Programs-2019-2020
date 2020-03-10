// 2020-3-10 -- Selection Sort.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 2/21/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "assert.h" // Used to check if file opened
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

void sort(string a[], int length);
int findMinimum(string a[], int first, int length);
void swap(int &x, int &y);

///MAAIINNNNNN
int main()
{
	///Variablesssss
	//Array Values
	string list[10] = { "Name0", "Name1", "Name2", "Name3", "Name4", "Name5", "Name6", "Name7", "Name8", "Name9" };
	//Array Size
	int size = 10;
	
	//Actual Code
	sort(list, size);

	for (int x = 0; x < 10; x++)
	{
		cout << list[x] << endl;
	}
	system("pause");
	return 0;
}

///FUNCTIONSSSSS
void sort(string a[], int length)
{
	int min = 0;

	for (int j = 0; j<(length - 1); j++)
	{
		min = findMinimum(a, j, length);

		if (min != j)
			swap(a[j], a[min]); 
	}
}
int findMinimum(string a[], int first, int length)
{
	int min = first;
	for (int k = first + 1; k<length; k++)
	{
		if (a[k]<a[min])
			min = k;
	}
	return min;
}
void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}