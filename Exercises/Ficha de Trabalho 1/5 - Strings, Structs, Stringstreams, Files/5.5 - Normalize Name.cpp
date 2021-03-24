// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAllowed(string word) {
    
    vector<string> denied = {"DE", "DO", "DA", "DOS", "DAS", "E"} ;
    bool flag = true;
    for (string attemp : denied) {
        flag = flag && (attemp != word);
    }
    return flag;
}

string to_upper (string str) {

    string up = "";
    for (char letter : str) {
        up = up + toupper(letter);
    }
    return up;
}

string normalizeName(const string &name) {

    string solution;
    string word;
    vector<string> allowed_names;

    for (char letter : to_upper(name)) {

        if (letter != ' ') {
            word = word + letter;
        }
        else {
            if (isAllowed(word)) {
                allowed_names.push_back(word);
                word = "";
            }
            else {
                word = "";
            }
        }
    }
    allowed_names.push_back(word);

    for (string name : allowed_names) {
        solution = solution + name + " ";
    }
    return solution;
}

int main ()
{
    string name;
    cout << "Enter a name: ";
    getline(cin, name);
    cout << "Normalization: " << normalizeName(name) << endl;
    return 0;
}