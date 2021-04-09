#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>

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
    // In teacher's maze, there are 10 fences / 200 area
    int rd = ( 10 * number ) / 200 ; 
    return floor(rd);
}

int random (int max, int min) 
{   
    int number = rand() % (max - min + 1) + min ;
    return number;
}

bool is_Available(vector<char> maze, int index) 
{
    return (maze[index] == ' ');
}

void print_maze (int lines, int cols, vector<char> maze, string name) 
{   
    ifstream file;
    file.open(name);

    if (!file.good())
    {   
        ofstream new_file;
        new_file.open(name);
        new_file << lines << " x " << cols << endl;
        for (int i = 0 ; i < maze.size() ; i ++ ) 
        {
            new_file << maze [i];
            if (i > 1 && i % cols == cols - 1 && i != maze.size() - 1 ) 
            {
                new_file << endl;
            }
        }
        new_file.close();
    }
}

void generate (int max_cols, int max_lines, int quantity) 
{   
    int final, initial = time(NULL); 
    int counter = 0;
    while (counter != quantity) 
    {   
        string name = counter + 1 < 10 ? "MAZE_0" + to_string(counter+1) + ".TXT" : "MAZE_" + to_string(counter+1) + ".TXT";
        int MIN_COLS = 10;
        int MIN_LINES = 10;
        int cols = random (max_cols, MIN_COLS);
        int lines = random (max_lines, MIN_LINES);

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
        for (int index = 0 ; index < lines ; index ++)
        {
            maze[index] = FENCE;
            maze[maze.size() - 1 - index] = FENCE;
        }
        for (int index = lines ; index < maze.size() ; index ++ )
        {
            if (index % lines == 0 || index % lines == lines - 1)
            {
                maze[index] = FENCE;
            }
        }

        // Random objects input
        bool input_player = true;
        while (qtd_robots || qtd_fences || input_player) 
        {
            int index_robot = random (maze.size(), 0);
            if (is_Available(maze, index_robot) && qtd_robots) 
            {
                maze[index_robot] = ROBOT;
                qtd_robots -- ;
            }

            int index_fence = random (maze.size(), 0);
            if (is_Available(maze, index_fence) && qtd_fences) 
            {
                maze[index_fence] = FENCE;
                qtd_fences -- ;
            }

            int index_player = random (maze.size(), 0);
            if (is_Available(maze, index_player) && input_player)
            {   
                maze[index_player] = PLAYER;
                input_player = false;
            }

        }

        print_maze (cols, lines, maze, name);
        counter++;
    }
    final = time(NULL); 
    cout << quantity << " mazes were created in " << final - initial << " seconds." << endl;
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