#include <iostream>
#include <array>

using namespace std;

void printBoard (char jogadas[]) {

    cout << "#############" << endl;
    cout << "# " << jogadas[0] << " # " << jogadas[1] << " # "X #" << endl;
    cout << "#############" << endl;
    cout << "# X # O # X #" << endl;
    cout << "#############" << endl;
    cout << "# X # O # X #" << endl;
    cout << "#############" << endl;
}

int main () 
{
    char jogadas[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    printBoard(jogadas);
    return 0;
}

