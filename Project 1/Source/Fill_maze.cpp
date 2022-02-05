//T04_G04

#include <string>
#include <array>
#include <fstream>
#include <iostream>
using namespace std;

/** This function generates the maze to be shown on the screen in order to be playable by the user.
 * The function extracts each character by its index from the file selected previously by the user and allocates the character on the array @param maze (2d array whose dimensions are @param lines x @param cols, which contains the maze). **/

void fill_maze(char **maze, int lines, int cols, string file_name)
{

	string aux;
	int idx = 0;
    ifstream in_file(file_name);
    getline(in_file, aux);

	while (idx < lines)
	{   
        
		getline(in_file, aux);
		for (int j = 0; j < cols; j++)
		{
			maze[idx][j] = aux[j];
		}
		idx++;

	}
}