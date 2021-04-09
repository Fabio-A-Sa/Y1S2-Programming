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

int random (int max) 
{   
    int number = rand() % (max + 1) + MIN_COLS ;
    return number;
}

void generate (int max_cols, int max_lines, int quantity) 
{
    int cols = random (max_cols);
    int lines = random (max_lines);
    int area = lines * cols ;
    vector<char> maze = {};

    // Input white spaces
    while (area) 
    {   
        maze.push_back(' ');
        area--;
    }

    // Input border
    
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