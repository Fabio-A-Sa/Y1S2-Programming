// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{   
    vector<string> all_names;
    string input, file_name;
    string current_name;

    cout << "File name: ";
    cin >> input;
    file_name = "Files\\" + input + ".txt";
    ifstream file;
    file.open(file_name);

    if (!file.good()) {

        while (true) {

            cin.clear();
            cin.ignore(10000, '\n');
            cout << "File not found. Please try again: ";
            cin >> input;
            file_name = "Files\\" + input + ".txt";
            ifstream file(file_name);
            if (file.good())
                break;
        }
        file.open(file_name);
    }

    while (!file.eof()) {
        getline(file, current_name);
        all_names.push_back(current_name);
    }
    file.close();

    sort(all_names.begin(), all_names.end());

    string new_file_name = input + "_sorted.txt";
    ofstream another_file;
    another_file.open(new_file_name);

    for (string name : all_names)
        another_file << name << endl;

    another_file.close();

    return 0;
} 