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
    string file_name = "Files\\names.txt";
    string current_name;

    ifstream file;
    file.open(file_name);

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