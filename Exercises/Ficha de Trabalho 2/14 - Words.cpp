// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void store (vector<vector<string>> &data) {

    string file_name = "Files\\Text.txt";
    ifstream file;
    file.open(file_name);
    if (file.good()) {
        
    }   
    else {
        cout << "Error!" << endl;
    }
}

int main ()
{   
    vector<vector<string>> all_data;
    store(all_data);
    return 0;
}