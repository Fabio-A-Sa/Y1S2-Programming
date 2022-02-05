//T04_G04

#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <sstream>
using namespace std;

/** This function verifies if the maze selected by the user is legible to play - he/she selects a number ( @param num_maze ) between 1 to 99.
 * If the file MAZE_(number).txt exits, it is displayed on the screen the maze and the user starts to play.
 * If the file is not found, it will appear a error message on the screen, asking the user a new number to input.
 * If he/she wants to go back to main menu, the user must type the number 0 to do so. **/

void file(bool &chose_menu, bool &confirm_play, int &lines, int &cols, string &name_maze, int& num_maze)
{

	cout << "Please choose the number of the maze: (type 0 to go back)" << endl;

	cin >> num_maze;
	if (cin.eof())
	{
		exit(0);
	}

	while (cin.fail() || cin.peek() != '\n' || num_maze < 0 || num_maze > 99) 
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cerr << "Maze not found. Please try again." << endl;
		cout << "Please choose the number of the maze: (type 0 to go back)" << endl;
		cin >> num_maze;
		if (cin.eof())
		{
			exit(0);
		}
	}
	if (num_maze == 0)
	{
		confirm_play = false;
		chose_menu = false;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	else 
	{
		name_maze = num_maze < 10 && num_maze > 0 ? "MAZE_0" + to_string(num_maze) + ".TXT" : "MAZE_" + to_string(num_maze) + ".TXT";

		ifstream in_file(name_maze);
		if (!in_file.good())
		{
			cerr << "Maze not found. Please try again." << endl;
			file(chose_menu, confirm_play, lines, cols, name_maze, num_maze);
		}

		else
		{
			string line1;
			char x;
			getline(in_file, line1);
			istringstream instr(line1);
			instr >> lines >> x >> cols;

			chose_menu = true;
			confirm_play = true;
		}
	}
}