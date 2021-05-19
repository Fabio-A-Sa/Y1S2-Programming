// Created on May, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

void using_my_algorithm() {

    string current_file = "Files\\Names.txt", new_file = "Files\\Sorted.txt";
    vector<string> all_names;
    ifstream file;
    file.open(current_file);
    
    if (file.good()) {
        
        string current_name;
        while(!file.eof()) {
    
            getline (file, current_name);
            all_names.push_back(current_name);
        }

        file.close();


    }
    else {
        cout << "Wrong file" << endl;
    }
    
    if (all_names.size()) {

        ofstream file; 
        file.open(new_file);

        for (auto word : all_names) {
            file << word << endl;
        }
        
        file.close();
    }

}

void using_STL()  {

}

int main ()
{
    using_my_algorithm();
    using_STL();
    return 0;
}