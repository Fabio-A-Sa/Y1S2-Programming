// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <fstream>
using namespace std;

bool inList (list<string> lst, string name) {

    for (auto attemp : lst) {
        if (attemp == name) {
            return true;
        }
    }
    return false;
}

void using_my_algorithm() {

    string current_file = "Files\\Names.txt", new_file = "Files\\Sorted.txt";
    list<string> all_names = {}, new_names = {};
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
            if (!inList(new_names, name)) {
                new_names.push_back(name);
            }
        }

    }
    else {
        cout << "Wrong file!" << endl;
    }
    
    if (new_names.size()) {

        ofstream file; 
        file.open(new_file);

        for (auto word : new_names) {
            file << word << endl;
        }
        
        file.close();
    }

    else {
        cout << "Wrong file!" << endl;
    }

}

int main ()
{
    using_my_algorithm();
    return 0;
}