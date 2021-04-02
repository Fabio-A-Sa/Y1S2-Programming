// Created on April, 2021
// @author: Fábio Araújo de Sá

// Taken from the previous years exercise Sheet

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isHidroxide (string compound) {

    return (compound[compound.size()-2] == 'O' && compound[compound.size()-1] == 'H');
}

int main () 
{   
    vector<string> compounds = {"KOH", "H2O2", "NaCl", "NaOH", "C9H8O4", "MgOH"} ;
    
    for (string compound : compounds) {
        string answer = isHidroxide(compound) ? " is hidroxide" : " is not hidroxide";
        cout << compound << answer << endl;
    }
    
    return 0;   
}