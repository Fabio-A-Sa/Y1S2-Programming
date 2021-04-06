// Created on April, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <string>
#include <sstream> 
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

void normalizeName(const string name) {

    string names = to_upper(name);
    string solution;
    string word = "";

    while (true) {
        
    }
}

int main ()
{
    string name;
    cout << "Enter a name: ";
    getline(cin, name);
    cout << "Normalization: ";
    normalizeName(name);
    return 0;
}