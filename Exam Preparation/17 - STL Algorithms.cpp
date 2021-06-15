// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 246 of Lectures Material

#include <iostream>
#include <vector>
using namespace std;

void using_iterators() {
    
    vector<string> names = {"Marco", "Ilias", "Aurelio", "Tobias", "Crespo", "Vint"};
    vector<string>::iterator n;
    for (n = names.begin() ; n != names.end() ; n++ ) {
        cout << *n << endl;
    }
}

int main ()
{   
    using_iterators();
    return 0;
}