// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void store (vector<vector<string>> &data) {

    string file_name = "Files\\Book.txt";
    ifstream file;
    file.open(file_name);
    if (file.good()) {
        
        while (!file.eof()) {
            string current_line, current_word = "";
            vector<string> current_content = {};
            getline(file, current_line);
            for (int i = 0 ; i < current_line.size() ; i++ ) {
                char current_char = current_line[i];
                if (current_char == ' ') {
                    current_content.push_back(current_word);
                    current_word = "";
                }
                else {
                    current_word += current_char;
                }
            }
            current_content.push_back(current_word);
            data.push_back(current_content);
        }
    }   
    else {
        cout << "Error!" << endl;
    }
}

void print_data (vector<vector<string>> data) {

    cout << endl << "Book.txt: \n" << endl;
    for (auto v : data) {
        for (string word : v) {
            cout << word << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void ask (vector<vector<string>> data) {

    string word;
    cout << "WORD? ";
    cin >> word;
    cout << "Results: " << endl;
    for (int i = 0 ; i < data.size() ; i++ ) {
        for (int j = 0 ; j < data[i].size() ; j++ ) {
            if (word == data[i][j]) {
                cout << i+1 << ": ";
                for (auto word : data[i]) {
                    cout << word << " " ;
                }
                cout << endl;
            }
        }
    }
    cout << endl;
}

int main ()
{   
    vector<vector<string>> all_data;
    store(all_data);
    print_data(all_data);
    while (!cin.eof()) {

        string answer;
        ask(all_data);
        cout << "\nCTRL+Z to stop or other letter to continue: ";
        cin >> answer;
        cout << endl;
    }
    return 0;
}