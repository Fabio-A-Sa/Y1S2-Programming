
#include <vector>
#include <string>
#include <limits>
#include <algorithm>
#include <fstream>

using namespace std;

struct Winner {

    string name;
    int wins;
};

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
        header.push_back(current_line);
        getline(old_file, current_line);
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
            current_winner.wins = stoi(wins);
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