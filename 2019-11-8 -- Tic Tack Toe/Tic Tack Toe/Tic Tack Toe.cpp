// Tic Tack Toe.cpp : Defines the entry point for the console application.
// Gabriel Hogan = 11/6/2019

//All Header Files Used This Year!!!
#include "stdafx.h" // Always here, leave alone!!!
#include "iostream" // Always add for in or out stream!!! (Also used for output formatting!)

// Not sure what this is called
using namespace std; // Always add this!!!


// Start a character array
char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
char x = char(196);

// Initiate Functions
int checkwin();
void board();


// Int Main
int main()
{
	// More Variables
	int player = 1, i, choice;
	char mark;

	// Loopy Doopy
	do
	{
		// Draw the Board!
		board();

		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", Pick a Spot!  ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')
			square[1] = mark;

		else if (choice == 2 && square[2] == '2')
			square[2] = mark;

		else if (choice == 3 && square[3] == '3')
			square[3] = mark;

		else if (choice == 4 && square[4] == '4')
			square[4] = mark;

		else if (choice == 5 && square[5] == '5')
			square[5] = mark;

		else if (choice == 6 && square[6] == '6')
			square[6] = mark;

		else if (choice == 7 && square[7] == '7')
			square[7] = mark;

		else if (choice == 8 && square[8] == '8')
			square[8] = mark;

		else if (choice == 9 && square[9] == '9')
			square[9] = mark;

		else
		{
			// I know Hannah will break it!
			cout << "YOU CAN'T DO THAT ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = checkwin();

		player++;
	} while (i == -1);

	//Generates the board again
	board();
	
	//Check if there is a winner
	if (i == 1)
		cout << "Player " << --player << " won ";
	else
		cout << "The Game Ended In a Draw!" << endl;
	
	//Wait for game to end
	system("pause");
	return 0;
}


// Function to check who won!!!
int checkwin()
{
	//Row 1
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	//Row 2
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	//Row 3
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	//Column 1
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	//Column 2
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	//Column 3
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	//Diagonal Top Left to Bottom Right
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	//Diagonal Top Right to Bottom Left
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	// Check if the character is invalid and cause an error!
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	// Means no one has won!
	else
		return -1;
}

// Functio to make the board!!!
void board()
{
	// Clear the screen to make a new baord
	system("cls");

	// Make the board!!!
	cout << "     " << char(179) << "     " << char(179) << "     " << endl;
	cout << "  " << square[1] << "  " << char(179)  << "  " << square[2] << "  " << char(179) << "  " << square[3] << endl;

	cout << "_____" << char(179) << "_____" << char(179) << "_____" << endl;
	cout << "     " << char(179) << "     " << char(179) << "     " << endl;

	cout << "  " << square[4] << "  " << char(179) << "  " << square[5] << "  " << char(179) << "  " << square[6] << endl;

	cout << "_____" << char(179) << "_____" << char(179) << "_____" << endl;
	cout << "     " << char(179) << "     " << char(179) << "     " << endl;

	cout << "  " << square[7] << "  " << char(179) << "  " << square[8] << "  " << char(179) << "  " << square[9] << endl;

	cout << "     " << char(179) << "     " << char(179) << "     " << endl << endl;
}
