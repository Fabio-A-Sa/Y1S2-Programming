// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 153 of Lectures Material

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeBinary() {

    ofstream file;
    string file_name = "Numbers.dat";
    file.open(file_name);
    for (int i = 65 ; i < 65 + 25 ; i++ ) {
        file << (char) i << endl;
    }
    cout << "Exit success!" << endl;
}

void showNotes () {

    string file_name = "Notes.txt"; // Note: does not necessarily have the extension .txt
    ifstream file;
    file.open(file_name);
    if (file.good()) {
        string current_line;
        while (!file.eof()) {
            getline(file, current_line);
            cout << current_line << endl;
        }
    }
    else {
        cerr << "This file not exists!" << endl;
        exit(1);
    }
    file.close();
}

int main()
{   
    showNotes();
    writeBinary();
    return 0;
}