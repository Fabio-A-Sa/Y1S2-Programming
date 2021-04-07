#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <limits>
#include <ctime>
#include <fstream>
#include <cstddef>

using namespace std;

struct Player {

    string name;
    char symbol;
};

struct Winner {

    string name;
    int wins;
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
    
    while (tolower(symbol) != 'x' && tolower(symbol) != 'o') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid symbol. " << player1.name << ", please try again: ";
        cin >> symbol;
    }

    player1.symbol = toupper(symbol);
    players.push_back(player1);

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Player player2;
    cout << "Player 2 Name: ";
    getline(cin, name);
    player2.name = name;
    symbol = players[0].symbol == 'X' ? 'O' : 'X';
    cout << player2.name << ", your symbol is obviously '" << symbol << "'.\n" << endl;
    player2.symbol = symbol;
    players.push_back(player2);

}

bool end_game(char *board) {

    bool condition1 = board[0] == board[1] && board[1] == board[2];
    bool condition2 = board[3] == board[4] && board[4] == board[5];
    bool condition3 = board[6] == board[7] && board[7] == board[8];
    bool condition4 = board[0] == board[3] && board[3] == board[6];
    bool condition5 = board[1] == board[4] && board[4] == board[7];
    bool condition6 = board[2] == board[5] && board[5] == board[8];
    bool condition7 = board[0] == board[4] && board[4] == board[8];
    bool condition8 = board[2] == board[4] && board[4] == board[6];
    return condition1 || condition2 || condition3 || condition4 || condition5 || condition6 || condition7 || condition8 ;
}

bool isAvailable (char *board, int position) {

    return board[position-1] != 'X' && board[position-1] != 'O';
}

void normalize (string &name) {

    while (name.size() != 15) {
        name += ' ';
    }
}

bool inside (vector<Winner> winners, string name) {
    
    for (Winner winner : winners) {
        if (winner.name == name) {
            return true;
        }
    }
    return false;
}

void store (string name) {
        	
    string file_name = "TicTacToe_Winners.txt";
    normalize(name);
    ifstream file;
    file.open(file_name);

    if (file.good()) {

        vector<string> header;
        vector<Winner> winners;
        string current_line;
        ifstream old_file;
        old_file.open(file_name);

        getline(old_file, current_line);
        cout << current_line;
        header.push_back(current_line);
        getline(old_file, current_line);
        cout << current_line;
        header.push_back(current_line);

        while (!old_file.eof()) {

            getline(old_file, current_line);
            string name = current_line.substr(0, 15);
            string wins = "";
            string aux = current_line.substr(16, current_line.size()-16);

            for (char letter : aux) {
                if (letter != ' ' && letter != '-') {
                    wins += letter;
                }
            }

            Winner current_winner;
            current_winner.name = name;
            cout << current_winner.name;
            current_winner.wins = stoi(wins);
            cout << current_winner.wins << endl;
            winners.push_back(current_winner);

        }

        old_file.close();
        
        if (inside (winners, name)) {
            for (Winner &winner : winners) {
                if (winner.name == name) {
                    winner.wins += 1;
                    break;
                }
            }
        }
        else {
            Winner new_winner;
            new_winner.name = name;
            new_winner.wins = 1;
            winners.push_back(new_winner);
        }

        ofstream another_file;
        another_file.open(file_name);

        another_file << header[0] << endl << header[1] << endl;

        for (int i = 0 ; i < winners.size() -1 ; i++) {
            another_file << winners[i].name << " - " << winners[i].wins << endl;
        }
        another_file << winners[winners.size()-1].name << " - " << winners[winners.size()-1].wins;

        another_file.close();
    }
    
    else {

        string header = "Player          - Wins\n----------------------";
        ofstream new_file;
        new_file.open(file_name);
        new_file << header << endl;
        new_file << name << " - 1";
        new_file.close();
    }
    
}

void play (vector<Player> players, char *board) {

    int counter = 0;
    int position;
    int t_initial, t_final;
    
    printBoard(board);
    cout << endl;

    t_initial = time(NULL);
    while (!end_game(board)) {

        counter = counter % 2;
        cout << players[counter].name << " is your turn. Choose an empty position to play: ";
        cin >> position;

        while (!isAvailable(board, position) && cin.peek() != '\n') {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Position not available. Try again: ";
            cin >> position;
        }

        board[position-1] = players[counter].symbol;
        cout << endl;
        printBoard(board);
        cout << endl;

        counter++;
    }
    
    string winner = players[counter-1].name;
    t_final = time(NULL);
    int delta = t_final - t_initial;
    cout << "Congratulations " << winner << "! You win in " << delta << " seconds!\n" << endl;
    store (winner);

}

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