// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 20 of Lectures Material

#include <iostream>
using namespace std;

int main()
{   
    for (int i = 0 ; i < 101 ; i++ ) {
        if (i == 13) {
            continue; // Jump to another number, without print '13'
        }
        cout << i << endl;
    }
    for (int i = 0 ; i < 101 ; i++ ) {
        if (i == 13) {
            break; // Stop a loop, without print i < 12
        }
        cout << i << endl;
    }
    return 0;
}