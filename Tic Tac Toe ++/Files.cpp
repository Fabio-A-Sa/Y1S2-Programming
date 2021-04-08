// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <vector>
#include <string>
#include <limits>
#include <iostream>
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

bool in_string (vector<string> vector , string name) {

    for (string attemp : vector) {
        if (attemp == name) {
            return true;
        }
    }
    return false;
}

bool in_int (vector<int> vector , int number) {

    for (int attemp : vector) {
        if (attemp == number) {
            return true;
        }
    }
    return false;
}

void get_data_string(vector<Winner> winners, vector<string> &all_names) {
    
    for (Winner winner : winners) {
        if (!in_string(all_names, winner.name)) {
            all_names.push_back(winner.name);
        }
    }
    sort(all_names.begin(), all_names.end());
}

void get_data_int(vector<Winner> winners, vector<int> &all_wins) {

    for (Winner winner : winners) {
        if (!in_int(all_wins, winner.wins)) {
            all_wins.push_back(winner.wins);
        }
    }
    sort(all_wins.begin(), all_wins.end());
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

        vector<string> all_names;
        vector<int> all_wins;
        get_data_string(winners, all_names);
        get_data_int(winners, all_wins);
        
        for (string name : all_names) {
            cout << name << " ";
        }
        cout << endl;
        for (int wins : all_wins) {
            cout << wins << " ";
        }
        cout << endl;

        ofstream another_file;
        another_file.open(file_name);

        another_file << header[0] << endl << header[1] << endl;

        for (int number : all_wins) {
            for (string name : all_names) {
                for (int i = 0 ; i < winners.size() ; i++) {

                    if (winners[i].name == name && winners[i].wins && i != winners.size()-1)
                        another_file << winners[i].name << " - " << winners[i].wins << endl;

                    else if (winners[i].name == name && winners[i].wins && i == winners.size()-1)
                        another_file << winners[i].name << " - " << winners[i].wins;

                    else
                        continue;
                }
            }
        }

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