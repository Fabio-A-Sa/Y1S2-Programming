#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include <fstream>

#define MIN_COLS 5;
#define MIN_LINES 5;
#define FENCE '*';
#define PLAYER 'H';
#define ROBOT 'R';

using namespace std;

int proportion_robots (int number) 
{
    // In teacher's maze, there are 5 robots / 200 area
    int rd = ( 5 * number ) / 200 ;
    return floor(rd);
}

int proportion_fences (int number)
{
    // In teacher's maze, there are 18 fences / 200 area
    int rd = ( 18 * number ) / 200 ; 
    return floor(rd);
}

int random (int max) 
{   
    int number = rand() % (max + 1) + MIN_COLS ;
    return number;
}

void print_maze (int lines, int cols, vector<char> maze) 
{
    for (int i = 0 ; i < maze.size() ; i ++ ) 
    {
        cout << maze [i];
        if (i % cols == 0) 
        {
            cout << endl;
        }
    }
}

void generate (int max_cols, int max_lines, int quantity) 
{
    int cols = random (max_cols);
    int lines = random (max_lines);
    int area = lines * cols ;
    int qtd_robots = proportion_robots (area);
    int qtd_fences = proportion_fences (area);
    vector<char> maze = {};

    // Input white spaces
    while (area) 
    {   
        maze.push_back(' ');
        area--;
    }

    // Input border
    for (int index = 0 ; index < cols ; index ++)
    {
        maze[index] = FENCE;
        maze[maze.size() - 1 - index] = FENCE;
    }




}

int main ()
{   
    srand(time(NULL));
    int MAX_COLS;
    int MAX_LINES;
    int QTD;

    cout << "Max columns: ";
    cin >> MAX_COLS;
    cout << "Max lines: ";
    cin >> MAX_LINES;
    cout << "How many mazes? ";
    cin >> QTD;
    
    generate (MAX_COLS, MAX_LINES, QTD);

    return 0;
}