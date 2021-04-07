#include <iostream>
#include <array>
#include <vector>
#include <cstddef>

using namespace std;

void printBoard (char jogadas[]) {

    cout << "#############" << endl;
    cout << "# " << jogadas[0] << " # " << jogadas[1] << " # " << jogadas[2] << " #" << endl;
    cout << "#############" << endl;
    cout << "# " << jogadas[3] << " # " << jogadas[4] << " # " << jogadas[5] << " #" << endl;
    cout << "#############" << endl;
    cout << "# " << jogadas[6] << " # " << jogadas[7] << " # " << jogadas[8] << " #" << endl;
    cout << "#############" << endl;
}

int main () 
{   
    const int positions = 9;
    const int lines = 3 ; const int cols = 3;

    // Dinamic memory allocation using malloc() method
    char ** board = (char **) malloc (lines * sizeof(char *));
    for (int i = 0 ; i < cols ; i++)
        board[i] = (char *) malloc (cols * sizeof(char));

    vector<char> numbers = {'1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    printBoard(jogadas);
    return 0;
}

