#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <limits>
#include <cstddef>

using namespace std;

struct Player {

    string name;
    char symbol;
};

void fill (char *board) {

    for (int i = 0 ; i < 9 ; i++) {
        *(board + i) = char(i+49);
    }
}

void printBoard (char *board) {

    cout << "#############" << endl;
    cout << "# " << board[0] << " # " << board[1] << " # " << board[2] << " #" << endl;
    cout << "#############" << endl;
    cout << "# " << board[3] << " # " << board[4] << " # " << board[5] << " #" << endl;
    cout << "#############" << endl;
    cout << "# " << board[6] << " # " << board[7] << " # " << board[8] << " #" << endl;
    cout << "#############" << endl;
}

void choose_options(vector<Player> &players) {

    string name;
    char symbol;

    Player player1;
    cout << "Player 1 Name: ";
    getline(cin, name);
    player1.name = name;
    cout << "Choose a symbol: 'X' or 'O' : ";
    cin >> symbol;
    player1.symbol = symbol;
    players.push_back(player1);

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Player player2;
    cout << "Player 2 Name: ";
    getline(cin, name);
    player2.name = name;
    symbol = players[0].symbol == 'X' ? 'O' : 'X';
    cout << "Your symbol is obviously '" << symbol << "'." << endl;
    player2.symbol = symbol;
    players.push_back(player2);

}

bool end_game(char *board) {

    return false;
}

bool isAvailable (char *board, int position) {

    return true;
}

void play (vector<Player> players, char *board) {

    int counter = 0;
    int position;

    while (!end_game(board)) {

        counter %= 1;
        cout << players[counter].name << " is your turn. Choose an empty position to play: ";
        cin >> position;

        while (!isAvailable (board, position])) {
            cout << "Position not available. Try again: ";
            cin >> position;
        }
        printBoar(board);
        counter++;
    }

}

int main () 
{   
    const int positions = 9;
    char * board = (char *) malloc (positions * sizeof(char));

    fill(board);
    vector<Player> players;
    choose_options(players);

    printBoard(board);

    free(board);
    return 0;
}