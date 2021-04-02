// Created on April, 2021
// @author: Fábio Araújo de Sá

// Taken from the previous years exercise Sheet

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void decompose (string compound) {
    
    string element = "";
    for (char letter : compound)

        if (islower(letter) && element.size()) {
            element = element + letter;
            cout << element << " ";
            element = "";
        }
        else if (isupper(letter) && !element.size()) {
            element = element + letter;
        }
        else if (isupper(letter) && element.size()) {
            cout << element << " ";
            element = "";
            element = element + letter;
        }
        else
            continue;

    cout << element;
}

int main ()
{
    vector<string> compounds = {"KOH", "H2O2", "NaCl", "NaOH", "C9H8O4", "MgOH"} ;
    for (string compound : compounds) {
        cout << compound << " = ";
        decompose(compound);
        cout << endl;
    }
    return 0;
}
