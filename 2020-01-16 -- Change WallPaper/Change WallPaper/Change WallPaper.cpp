// Practice Filestream.cpp : Defines the entry point for the console application.
// Gabriel Hogan - 1/14/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "string" // String Variables
#include <windows.h>
// Not sure what this is called
using namespace std; // Always add this!!!


int main()
{ 

	int return_value = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, L"J:/1505377253953.jpg", SPIF_UPDATEINIFILE);

	///PAUSEEEEE
	system("pause");


    return 0;
}

