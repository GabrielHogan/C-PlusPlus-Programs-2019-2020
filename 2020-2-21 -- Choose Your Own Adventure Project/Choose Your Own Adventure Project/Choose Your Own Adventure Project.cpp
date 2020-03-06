// Choose Your Own Adventure Project.cpp : Defines the entry point for the console application.
// Gabriel Hogan & Mary Pattillo - 2/12/2020

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)
#include "iomanip" // Changing the look or formatting output
#include "fstream" // File Stream
#include "assert.h" // Used to check if file opened
#include "string" // String Variables

// Not sure what this is called
using namespace std; // Always add this!!!

					 
///Functions
void getStoryFile(string file, bool &es, int &minutes);
void checkMinutes(int &minutes, int minutesToSub);
//void runStory();




int main()
{
	//-------------------------------------------------------

	///Variables
	//What File?
	string fileToGet = "fail.txt";
	//Check if story is over!
	bool endOfStory = false;
	//Check which chapter were on
	int chapter = 1;
	string chapterconvert = to_string(chapter);
	//Variable to check input
	string input = "";
	//Minutes Passed
	int minutes = 0;

	//-------------------------------------------------------

	fileToGet = chapterconvert + ".txt";

	//-------------------------------------------------------

	///Get inital file!
	getStoryFile(fileToGet, endOfStory, minutes);

	///Story Loop
	while (endOfStory == false) {
		
		//Get story text
		getline(cin, input);

		//Clear to make way for story
		system("cls");

		//What file to get next
		chapter++;
		string chapterconvert = to_string(chapter);
		fileToGet = chapterconvert + input + ".txt";

		//Get File
		getStoryFile(fileToGet, endOfStory, minutes);
	}

	//-------------------------------------------------------

	///System Pause
	system("pause");

	//-------------------------------------------------------

	///STOPPPPPP
    return 0;
}



///Variable Code
void getStoryFile(string file, bool &es, int &minutes) {
	//Temp Variables
	ifstream get;
	string temp;
	int getminutes;
	get.open(file.c_str());
	assert(!get.fail());
	
	get >> getminutes;
	checkMinutes(minutes, getminutes);

	//Print out file
	do {
		get >> temp;

		//Check if it's a star
		if (temp == "*") {
			cout << endl;
		}
		else if (temp == "#") {
			es = true;
		}
		else {
			cout << temp << " ";
		}

    } while (!get.eof());

	//Print Minutes Left
	cout << minutes << " minutes have passed!" << endl;

	//Close File
	get.close();
}

void checkMinutes(int &minutes, int minutesToAdd)  {
	minutes += minutesToAdd;
}