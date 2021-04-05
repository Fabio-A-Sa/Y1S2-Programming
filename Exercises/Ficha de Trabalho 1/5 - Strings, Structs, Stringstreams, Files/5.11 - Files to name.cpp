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
    ifstream file(file_name);

    while (!file.good()) {

        cout << "File not found. Please try again: ";
        cin >> input;
        file_name = "Files\\" + input + ".txt";
        ifstream file(file_name);
    }

    while (!file.eof()) {
        getline(file, current_name);
        all_names.push_back(current_name);
    }

    file.close();
    sort(all_names.begin(), all_names.end());

    for (string name : all_names) {
        cout << name << endl;
    }
    return 0;
} 