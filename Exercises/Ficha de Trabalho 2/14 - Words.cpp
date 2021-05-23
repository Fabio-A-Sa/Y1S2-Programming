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
        
        while (!file.eof()) {
            string current_line, current_word = "";
            vector<string> current_content = {};
            getline(file, current_line);
            for (int i = 0 ; i < current_line.size() ; i++ ) {
                char current_char = current_line[i];
                if (current_char == ' ') {
                    current_content.push_back(current_word);
                    current_word = "";
                }
                else {
                    current_word += current_char;
                }
            }
            current_content.push_back(current_word);
            data.push_back(current_content);
        }
    }   
    else {
        cout << "Error!" << endl;
    }
}

void print_data (vector<vector<string>> data) {

}

int main ()
{   
    vector<vector<string>> all_data;
    store(all_data);
    print_data(all_data);
    return 0;
}