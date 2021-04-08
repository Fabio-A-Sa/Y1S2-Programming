// Created on April, 2021
// @author: Fábio Araújo de Sá

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
#include "Menu.cpp"

using namespace std;

int main () 
{      
    srand(time(NULL));
    vector<Player> players;
    const int positions = 9;
    char * board = (char *) malloc (positions * sizeof(char));
    fill(board);

    char mode = menu();
    switch (mode)
    {   
        choose_options(players, mode);

        case '1':
            play_with_2_players(players, board);
            break;
        
        case '2':
            play_peacefull(players, board);
            break;

        case '3':
            cout << "Available soon";
            break;

        default:
            break;
    }

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