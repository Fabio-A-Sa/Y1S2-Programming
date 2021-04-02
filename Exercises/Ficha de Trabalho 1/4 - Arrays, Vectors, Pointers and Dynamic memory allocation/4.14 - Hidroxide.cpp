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
    vector<string> compounds = {"KOH", ""} ;
    
    return 0;   
}