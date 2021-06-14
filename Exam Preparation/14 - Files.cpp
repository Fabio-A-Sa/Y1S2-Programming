// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 153 of Lectures Material

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
    return 0;
}