// Created on June, 2021
// @author: Fábio Araújo de Sá
// Page 20/46 of Lectures Material

#include <iostream>
using namespace std;

void by_value(int number) { number = 23987; }
void by_reference (int &number) { number = 23987; }

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

    // Call by value and vall by reference
    int X = 10;
    cout << "\nDefault: " << X << " ";
    by_value(X);
    cout << "\nCall by value: " << X << " ";
    by_reference(X);
    cout << "\nCall by reference: " << X << " ";

    
    return 0;
}