// Created on April, 2021
// @author: Fábio Araújo de Sá

// Taken from the previous years exercise Sheet

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void decompose (string compound) {
    cout << "test";
}

int main ()
{
    vector<string> compounds = {"KOH", "H2O2", "NaCl", "NaOH", "C9H8O4", "MgOH"} ;
    for (string compound : compounds) {
        cout << compound << " ";
        decompose(compound);
        cout << endl;
    }
    return 0;
}
