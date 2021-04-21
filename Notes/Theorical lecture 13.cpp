// Created on April 19, 2021
// @author: Fábio Araújo de Sá
// Theorical lecture 13, pages 144 --> 162

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

void open_file () { 

    string directory;
    cout << "Directory of file: ";
    getline(cin, directory);

    ifstream new_file;
    string current_line;
    new_file.open(directory);
    if (new_file.good()) {

        while (!new_file.eof()) {
            getline(new_file, current_line);
            cout << current_line;
        }
        new_file.close();
    }
    else {
        cout << "This file does not exist. Please try again.";
    }
}

int main ()
{
    open_file();
    return 0;
}