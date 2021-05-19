// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

bool inVector (vector<string> vector, string name) {
    for (auto attemp : vector) {
        if (attemp == name) {
            return true;
        }
    }
    return false;
}

void using_my_algorithm() {

    string current_file = "Files\\Names.txt", new_file = "Files\\Sorted.txt";
    vector<string> all_names = {}, new_names = {};
    ifstream file;
    file.open(current_file);
    
    if (file.good()) {
        
        string current_name;
        while(!file.eof()) {
    
            getline (file, current_name);
            all_names.push_back(current_name);
        }

        file.close();
        
        for (auto name : all_names) {
            if (!inVector(new_names, name)) {
                new_names.push_back(name);
            }
        }

        sort(new_names.begin(), new_names.end());

    }
    else {
        cout << "Wrong file" << endl;
    }
    
    if (new_names.size()) {

        ofstream file; 
        file.open(new_file);

        for (auto word : all_names) {
            file << word << endl;
        }
        
        file.close();
    }

}

int main ()
{
    using_my_algorithm();
    return 0;
}