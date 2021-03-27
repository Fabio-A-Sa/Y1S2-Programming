#include <iostream>
#include <array>

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
    char jogadas[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'} ;
    printBoard(jogadas);
    return 0;
}

