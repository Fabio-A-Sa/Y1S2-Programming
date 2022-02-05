//T04_G04

#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <array>
#include <ctime>
#include "Menu.cpp"
#include "Maze_file.cpp"
#include "Fill_maze.cpp"
#include "Play.cpp"
#include "Winners.cpp"
using namespace std;

int main()
{
	bool play_again = true;
	while (play_again)
	{
		int lines, cols, ti, tf, num_maze;			   /** @param ti -> initial time, that is, when the user starts playing; @param tf - final time -> time when the user completes sucessfully the maze.**/
		bool confirm_play = false, chose_maze = false, n_record = false; /** flags that indicates in which part is the user. They work simultaneously and allows user to play or go back to the main menu whenever he/she wants. **/
		string file_name, name_player;				   /** @param file_name -> string with name of the file of the chosen maze; @param name_player -> string that will receive the name of the user, in case if he/she wins.**/
		srand(time(NULL));

		while (!confirm_play)
		{
			ShowMenu(chose_maze);
			if (chose_maze)
			{
				file(chose_maze, confirm_play, lines, cols, file_name, num_maze);
			}
			if (cin.eof())
				exit(0);
		}

		char **maze = (char **)malloc(lines * sizeof(char *)); /** lines 34-37-> on this part, the main(), allocates the amount of memory needed to store all characters that constitutes the maze. The maze will be "created" by the fill_maze() function.**/
		for (int i = 0; i < lines; i++)
			maze[i] = (char *)malloc(cols * sizeof(char));
		fill_maze(maze, lines, cols, file_name);

		vector<Robot> bots;
		Player mob;
		get_positions(maze, lines, cols, bots, mob);

		ti = time(NULL);
		play(maze, mob, bots, lines, cols);
		tf = time(NULL);

		int time_game = tf - ti;
		free(maze); /** On this step, the function makes the memory heap used to store the maze free. **/

		if (mob.status == 'h')
		{
			cout << "You lost! Game over. :(" << endl;
		}

		else /** If the condition above is not true, it means that the user has won the game. He/she will be asked to input his/her name in order to fill the records file. **/
		{
			
			cout << "Input your name: " << endl;
			getline(cin, name_player);
			if (cin.eof())
			{
				exit(0);
			}
			while (name_player.size() > 15 || !name_player.size())
			{
				if (name_player.size() > 15)
					cerr << "Its too long. Please input a shorter name: " << endl;
				getline(cin, name_player);
				if (cin.eof())
				{
					exit(0);
				}
			}

			winners(num_maze, name_player, time_game, n_record);
			if (n_record)
			{
				cout << "You win!!! You completed the maze in " << time_game << " seconds. (New Record!)" << endl;
			}

			else
				cout << "You win!!! You completed the maze in " << time_game << " seconds. (A better time already exists!)" << endl;
			
		}

		char answer; /** lines 68-80 -> the terminal asks the user if he/she wants to play: if the user wants to play again, he/she inputs a 'y' or 'Y', and the main menu will appear again, else inputs, by declaring the value @param play_again as true, else he/she types 'n' or 'N' and the @param play_again becomes false.**/
		cout << "Play again? y/n : ";
		cin >> answer;
		if (cin.eof())
		{
			exit(0);
		}
		while ((tolower(answer) != 'y' && tolower(answer) != 'n') || cin.peek() != '\n') /** If it is not inputed an 'y' or a 'n', it will appear an error message and the user will be asked to input a valid charater.**/
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid button, please input a valid button: ";
			cin >> answer;
			if (cin.eof())
			{
				exit(0);
			}
		}

		if (tolower(answer) == 'y')
			play_again = true;

		else
			play_again = false;
	}
	return 0;
}
