#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <limits>
#include <ctime>
#include <algorithm>
#include <fstream>
#include <cstddef>

#include "Game.cpp"

using namespace std;

int main () 
{      
    srand(time(NULL));
    vector<Player> players;
    const int positions = 9;
    char * board = (char *) malloc (positions * sizeof(char));

    fill(board);
    choose_options(players);
    play(players, board);
    free(board);

    char answer;
    cout << "Play again? Y/N : ";
    cin >> answer;

    while (tolower(answer) != 'n' && tolower(answer) != 'y') {
        cout << "Invalid input. Please try again: ";
        cin >> answer;
    }

    if (tolower(answer) == 'y') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return main ();
    }

    return 0;
}