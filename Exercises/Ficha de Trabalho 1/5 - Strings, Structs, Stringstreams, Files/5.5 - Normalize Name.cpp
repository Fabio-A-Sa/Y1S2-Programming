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

    for (int index = 0 ; index < str.size() ; index++ ) {
        str[index] = toupper(str[index]);
    }
    return str;
}

string normalizeName(const string &name) {

    string name = to_upper(name);
    string solution;
    string word = "";
    vector<string> allowed_names;

    bool isName = false;    
    for (int index = 0 ; index < name.size() ; index ++ ) {

        char letter = name[index];

        if (letter == ' ' && )
        if (name[index] == " ") {

        }
    }

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