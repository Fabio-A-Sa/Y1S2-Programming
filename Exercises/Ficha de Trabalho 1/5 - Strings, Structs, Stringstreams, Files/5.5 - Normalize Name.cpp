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

string normalizeName(const string &name) {

    string solution;
    string word;
    vector<string> allowed_names;

    for (char letter : name) {
        if (letter != ' ') {
            word = word + letter;
        }
        else {
            if (isAllowed(toupper(word))
        }
    }

}

int main ()
{
    string name;
    cout << "Enter a name: ";
    getline(cin, toupper(name));
    cout << "Normalization: " << normalizeName(toupper(name)) << endl;
    return 0;
}