#include <iostream>
#include <array>
#include <string>
#include <cstddef>

using namespace std;

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

int main () 
{   
    // Dinamic memory allocation using malloc() method
    const int positions = 9;
    char * board = (char *) malloc (positions * sizeof(char));

    fill(board);
    printBoard(board);

    for (int i : {1, 2}) {
        cout << i << endl;
    }

    free(board);
    return 0;
}

