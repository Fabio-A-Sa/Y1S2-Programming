//T04_G04

#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <vector>
#include <cmath>
using namespace std;

struct Robot
{
	int id_number;
	char status;
	int x;
	int y;
};

struct Player
{
	char status;
	int x;
	int y;
};

/** This function gets the positions of the player and each robot,
 * by updating the data in the struct of both types with the coordinates of each one in the maze. **/

void get_positions(char **maze, int lines, int cols, vector<Robot> &bots, Player &mob)
{
	int counter = 1;
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (maze[i][j] == 'R')
			{
				Robot robot;
				robot.id_number = counter;
				robot.status = maze[i][j];
				robot.x = i;
				robot.y = j;
				bots.push_back(robot);
				counter++;
			}
			else if (maze[i][j] == 'H')
			{
				mob.x = i;
				mob.y = j;
				mob.status = 'H';
			}
		}
	}
}

/** This function verifies if the player @param mob is still alive by returning true if so, otherwise it return false. **/

bool is_alive(Player mob)
{
	if (mob.status == 'h')
		return false;
	return true;
}

/** This function verifies if all robots in the maze are destroyed,
 * by returning true if every Robot in @param bots has the its status as 'r', otherwise it returns false. **/

bool robots_destroyed(vector<Robot> bots)
{
	int count = 0;
	for (int i = 0; i < bots.size(); i++)
	{
		if (bots[i].status == 'r')
			count++;
	}
	if (count == (bots.size()))
		return true;

	return false;
}

/** This function displays the maze on console, after each play.  **/

void print_maze(char **maze, int lines, int cols)
{
	for (int i = 0; i < lines; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << maze[i][j];
		}
		cout << endl;
	}
}

/** This function determines the movement of each robot, designed by @param enemy,
 * according to the movement of the @param player, so that it can be as close as possible of the player. 
 * It also verifies if the robot has collided with other robot, with a fence or with the player, that is, it depurates if the robot has the same maze's indexes with the characters 'R', 'r', '*' and 'H'. **/

void robot_moves(Player &mob, Robot &enemy, char **maze)
{
	int dist_v, dist_h;

	dist_h = enemy.y - mob.y;

	dist_v = enemy.x - mob.x;

	maze[enemy.x][enemy.y] = ' ';

	if (dist_h > 0 && dist_v == 0)
	{
		enemy.y--;
	}

	else if (dist_h == 0 && dist_v < 0)
		enemy.x++;
	else if (dist_h < 0 && dist_v == 0)
		enemy.y++;
	else if (dist_h == 0 && dist_v > 0)
		enemy.x--;
	else if (dist_h > 0 && dist_v < 0)
	{
		enemy.y--;
		enemy.x++;
	}

	else if (dist_h < 0 && dist_v < 0)
	{
		enemy.x++;
		enemy.y++;
	}
	else if (dist_h < 0 && dist_v > 0)
	{
		enemy.x--;
		enemy.y++;
	}
	else if (dist_h > 0 && dist_v > 0)
	{
		enemy.x--;
		enemy.y--;
	}
	if (maze[enemy.x][enemy.y] == ' ')
		maze[enemy.x][enemy.y] = 'R';
	else if (maze[enemy.x][enemy.y] == '*')
	{
		maze[enemy.x][enemy.y] = 'r';
		enemy.status = 'r';
	}
	else if (maze[enemy.x][enemy.y] == 'H')
	{
		maze[enemy.x][enemy.y] = 'h';
		mob.status = 'h';
	}
	else
	{
		maze[enemy.x][enemy.y] = 'r';
		enemy.status = 'r';
	}
}

/** This function determine if the player @param mob has collided wiht a robot ('r' or 'R') or with a fence ('*').
 * It returns with 1 whether if he/she has collided with a "live" Robot or with a fence (and looses the game).
 * It returns 2 if he/she has collided with a stuck robot (invalid movement).
 * It return 0 if he/she hasn't collided with anything. (valid movement). **/

int player_collisions(int &x, int &y, char **maze, Player &mob)
{

	if (maze[x][y] == 'R' || maze[x][y] == '*')
	{
		mob.status = 'h';
		return 1;
	}
	else if (maze[x][y] == 'r')
	{
		return 2;
	}
	else
		return 0;
}

/** This function determines if the user has selected a valid button while he/she is playing. This command is obtained by the character @param command.
 * It returns true if the @param command is one of the valid characters ('q', 'w', 'e', 'd', 'c', 'x', 'z', 'a', 's').
 * It returns false if he/she hasn't inputed none of the characters above. **/

bool valid_button(char command)
{
	vector<char> allowed_commands = {'q', 'w', 'e', 'd', 'c', 'x', 'z', 'a', 's'};
	for (char attemp : allowed_commands)
	{
		if (tolower(command) == attemp)
			return true;
	}
	return false;
}

/** This funcion ensures the smooth operation of the game.
 * The funtion is active while the status of the player ( @param mob ) correponds to the character 'H' or all the robots haven't been destroyed yet.
 * In the beginning of each play, maze is displayed on the console, so that the user can decide what movement he wants to choose, by pressing on one of the buttons shown on the Rules.
 * If the user selects a button which doesn't correspond with none of the valid buttons, it will appear an error message, asking him/her to input a valid button.
 * Then, the player moves on the respective direction of the button, that is, the @param mob updates its coordinates and the character 'H' moves to corresponding cell,
 * by addicting or subtracting the indexes on the @param maze.
 * It is also verified, by calling the function player_collisions() if the player collided with a fence or a live robot, or with a stuck robot, a robot whose status is equal to the character 'r'.
 * If the second case happens, it is shown on the console an error message, asking the user for another movement.
 * After that, the movement of each robot and their eventual collisons in @param bots by calling the function robot_moves(), the mechanism of that is similar to the player's movement.
 * If the robot collides, its status is equal to the character 'r', otherwise it remians as 'R'.
 * This process is repeated until the player dies (the status of @param mob becomes a 'h', and he/she loses the game) or every robots are destroyed (all robots have their status equal to a 'r'), which he/she has completed successfully the maze and wins the game.
 * @param move is a flag that indicates if the player's moevement is valid or not- in so, it becomes true, else it becomes false.**/

void play(char **maze, Player &mob, vector<Robot> &bots, int lines, int cols)
{

	bool move;
	while (is_alive(mob) && !robots_destroyed(bots))
	{
		move = true;
		print_maze(maze, lines, cols);

		char command;
		int x, y;

		cout << "The robots are chasing you! Press a command to run away from them: " << endl;
		cin >> command;

		if (cin.eof())
		{
			exit(0);
		}

		while (!valid_button(command) || cin.peek() != '\n')
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			print_maze(maze, lines, cols);
			cerr << "Invalid command. Please choose another button." << endl;
			cin >> command;
			if (cin.eof())
			{
				exit(0);
			}
			
		}

		if (cin.eof())
		{
			exit(0);
		}

		if (command == 'w' || command == 'W')
		{
			x = mob.x - 1;
			y = mob.y;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.x--;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'a' || command == 'A')
		{
			x = mob.x;
			y = mob.y - 1;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.y--;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'd' || command == 'D')
		{
			x = mob.x;
			y = mob.y + 1;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.y++;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'x' || command == 'X')
		{
			x = mob.x + 1;
			y = mob.y;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';

				mob.x++;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'q' || command == 'Q')
		{
			x = mob.x - 1;
			y = mob.y - 1;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.y--;
				mob.x--;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'e' || command == 'E')
		{
			x = mob.x - 1;
			y = mob.y + 1;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.y++;
				mob.x--;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'z' || command == 'Z')
		{
			x = mob.x + 1;
			y = mob.y - 1;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.y--;
				mob.x++;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
				
		}
		else if (command == 'c' || command == 'C')
		{
			x = mob.x + 1;
			y = mob.y + 1;
			if (!player_collisions(x, y, maze, mob) || player_collisions(x, y, maze, mob) == 1)
			{
				maze[mob.x][mob.y] = ' ';
				mob.y++;
				mob.x++;
			}
			else if (player_collisions(x, y, maze, mob) == 2)
			{
				cout << "Invalid movement. Please select another movement." << endl;
				move = false;
			}
		}
		else if (command == 's' || command == 'S')
		{
			x = mob.x;
			y = mob.y;
			if (!player_collisions(x, y, maze, mob))
				mob.x = mob.x;
		}

		maze[mob.x][mob.y] = mob.status;

		int xbot, ybot;
		for (int idx = 0; idx < bots.size(); idx++)
		{
			if (move)
			{
				if (bots[idx].status == 'R' && maze[bots[idx].x][bots[idx].y] == 'R')
				{
					robot_moves(mob, bots[idx], maze);
				}
				else
					bots[idx].status = 'r';
			}
		}
	}

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	print_maze(maze, lines, cols);
}