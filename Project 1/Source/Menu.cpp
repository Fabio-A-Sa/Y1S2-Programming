//T04_G04

#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

/** This function displays the main menu.
The user choose a number of the options available (0 to exit the game, 1 to see the rules and 2 if he/she wants to play).
If the user eventually doesn't choose any of this numbers, it will appear a message error and ask him/her to choose a valid number. This process is repeated until he/she inputs a valid number.
In the Rules section (that is, it was inputed the number 1), it will appear a brief story of the game and also the buttons to move the player in-game. The user can leave this section, if he/she doesn't want to see the rules anymore by pressing a button to go back to the main menu.
If the user inputs the number 2, the flag @param chose_maze will be true since it means that he/she wants to choose the maze to play. **/

void ShowMenu(bool &chose_maze)
{
	int command; // This variable will receive the user's command, which is an integer.

	cout << "Please input a number (0,1,2)" << endl;
	cout << "1) Rules \n2) Play \n0) Exit" << endl;
	cin >> command;
	if (cin.eof())
	{
		exit(0);
	}

	while (cin.peek() != '\n' || cin.fail() || command < 0 || command > 2) 
	{

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cerr << "Error, please try again." << endl;
		cout << "Please input a number (0,1,2)" << endl;
		cout << "1) Rules \n2) Play \n0) Exit" << endl;
		cin >> command;
		if (cin.eof())
		{
			exit(0);
		}	
	}
	
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (command == 1)
	{
		cout << "RULES: \nYou are placed in a maze made up of high-voltage fences and posts. \nThere are also some interceptor robots that will try to destroy you. \nIf you touch the maze or any of these robots, that is the end of the game (and yours too!). \nThe robots are also destroyed when they touch the fences / posts or when they collide with each other.\nEvery time you can move in any direction(horizontally, vertically, or diagonally) to a contiguous cell or stay in the same position.\nEach robot moves one cell closer to your location, in whichever direction is the shortest path. \nThe robots have no vision sensors but they have an accurate odour sensor that allows them to follow you! \nThere is one hope : make the robots hit the maze or each other. If all of them are destroyed, you win! \n" << endl;
		cout << "Controls: \nQ-> Up-left \nW-> Up \nE-> Up-Right\nA-> Left \nD-> Right \nZ-> Down-left \nX-> Down \nC-> Down-Right \nS-> stay in the same position." << endl;

		cout << "Press any button to go to main menu." << endl;
		if (cin.eof())
		{
			exit(0);
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (cin)

			chose_maze = false;
			
	}

	else if (command == 2)

		chose_maze = true;

	else if (command == 0)

		exit(0);

	else
		if (cin.eof())
			exit(0);
}
