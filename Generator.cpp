#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>
#include <fstream>

#define MIN_COLS 5;
#define MIN_COLS 5;
#define FENCE '*';
#define PLAYER 'H';
#define ROBOT 'R';


using namespace std;

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